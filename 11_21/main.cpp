#include "arr.h"
#include <iostream>

using namespace std;

int main() {
  arr<int> aint;
  arr<char> achar;
  arr<double> adouble;

  for (int i = -2; i < 52; i++) {
    aint.set(i, i * 2);
    achar.set(i, i%127 + 32);
  }

  for (int i = -2; i < 52; i++) {
    cout << "aint[" << i << "]: " << aint.get(i) << endl;
    cout << "achar[" << i << "]: " << achar.get(i) << endl;
  }
  
  return 0;
}
