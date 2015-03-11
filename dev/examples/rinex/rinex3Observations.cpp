#include "Rinex3NavStream.hpp"
#include "Rinex3NavHeader.hpp"
#include "Rinex3NavData.hpp"
#include <iostream>
#include <stdint.h>


using namespace std;
using namespace gpstk;


const char* OUTPUT_FILE = "rinex3navExampleOutput.gps";

void fillNavData(Rinex3NavData& rnd);

int main(int argc, char *argv[])
{
  cout << "Open file for test write: " << OUTPUT_FILE << endl;
  remove(OUTPUT_FILE);
  Rinex3NavStream rns(OUTPUT_FILE, ios::out);
  
  
  // write header
  cout << "Header processing...";
  try {
    Rinex3NavHeader rhd;
    rhd.version = 3;
    rhd.fileAgency = "NIC";
    rhd.fileProgram = "gpstk";
    rhd.setFileSystem("G");
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
    Rinex3NavData rnd;
    rnd.satSys = "G";
    fillNavData(rnd);
    rns << rnd;
  } catch (const Exception& e) {
    cout << endl << e.what() << endl;
    exit(2);
  }
  cout << "success" << endl;
  // end write nav data

  rns.close();
  exit(0);
}

void fillNavData(Rinex3NavData& rnd) {
  rnd.PRNID = 12;
  rnd.af0 = 1;
  rnd.af1 = 2;
  rnd.af2 = 3;
}