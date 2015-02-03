#include "Rinex3NavStream.hpp"
#include "Rinex3NavHeader.hpp"
#include "Rinex3NavData.hpp"
#include <iostream>
#include <stdint.h>
#include <math.h>


using namespace std;
using namespace gpstk;


const char* OUTPUT_FILE = "rinex211nav.glo";

Rinex3NavData getNavData();

int main(int argc, char *argv[])
{
  cout << "Open file for test write: " << OUTPUT_FILE << endl;
  remove(OUTPUT_FILE);
  Rinex3NavStream rns(OUTPUT_FILE, ios::out);

  // write header
  cout << "Header processing...";
  try {
    Rinex3NavHeader rhd;
    rhd.version = 2.11;
    rhd.fileAgency = "NIC";
    rhd.fileProgram = "gpstk";
    rhd.setFileSystem("R");
    rhd.valid = Rinex3NavHeader::allValid2;
    rns << rhd;
  } catch (const Exception& e) {
    cout << endl << e.what() << endl;
    exit(1);
  }
  cout << "success" << endl;
  // end header writing
  
  // write nav data
  cout << "Navigation data processing...";
  try {
    for(int i = 0; i < 2; i++) {
      Rinex3NavData rnd = getNavData();
      rns << rnd;
    }
  } catch (const Exception& e) {
    cout << endl << e.what() << endl;
    exit(2);
  }
  cout << "success" << endl;
  // end write nav data

  rns.close();
  exit(0);
}

Rinex3NavData getNavData() {
  GloEphemeris gres;
  short prn = 10;
  CommonTime epoch = CommonTime::BEGINNING_OF_TIME;
  Triple pos(1,1,1);
  Triple vel(1,1,1);
  Triple acc(1,1,1);
  double clkbias = 1;
  double clkdrift = 1;
  long mftime = 1;
  short h = 1;
  short freqnum = 1;
  double ageofinfo = 1;
  gres.setRecord(
    "R", prn, epoch, pos, vel, acc,
    clkbias, clkdrift, mftime,
    h, freqnum, ageofinfo
  );
  Rinex3NavData res(gres);
  return res;
}