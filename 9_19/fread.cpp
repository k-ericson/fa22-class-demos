#include <fstream>
#include <iostream>

using namespace std;

int main() {
  int count = 0;
  int temp;
  ifstream infile;
  infile.open("billber.banana");

  infile >> temp;
  while(infile) {
    count++;
    cout << "number " << count << ": " << temp << endl;
    infile >> temp;
  }
  cout << "I just read " << count << " numbers!" << endl;

  infile.close();
  return 0;
}
