#include "frac.h"
#include <fstream>
#include <iostream>

using namespace std;

int main() {
  Frac test;
  Frac pfrac(1, 4);

  cout << "test: " << test << endl
       << "pfrac: " << pfrac << endl;

  Frac test2(5, 27);
  cout << "test2: " << test2 << endl;
  Frac t3 = pfrac * test2;
  cout << pfrac << " * " << test2 << " = " << t3 << endl;

  Frac t4 = pfrac.operator*(test2);
  cout << "t4: " << t4 << endl;

  ofstream out;
  out.open("output");
  out << pfrac << " * " << test2 << " = " << t4 << endl;
  out.close();

  
  return 0;
}
