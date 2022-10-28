
#include <iostream>

using namespace std;

int main() {
  int * iptr = new int[3];
  char * cat = new char[4];
  cat[0] = 'c';
  cat[1] = 'a';
  cat[2] = 't';
  cat[3] = '\0';
  int * phelp;
  phelp = iptr;

  for (int i = 0; i < 3; i++) {
    iptr[i] = i + 1;
  }

  for (int i = 0; i < 3; i++) {
    cout << "phelp[" << i << "]: " << phelp[i] << endl;
  }

  cout << "*phelp: " << *phelp << endl;
  // cout << "*(phelp + 1): " << *(phelp + 1) << endl;
  // phelp += 2;
  // cout << "*phelp: " << *phelp << endl;
  // phelp++;
  // cout << "*phelp: " << *phelp << endl;
  // phelp += 7;
  // cout << "*phelp: " << *phelp << endl;

  cout << "*(phelp - 2): " << *(phelp - 2) << endl;
  *(phelp + 4) = 5;

  cout << "iptr: " << iptr << endl;
  cout << "cat: " << cat << endl;
  
  delete[] iptr;
  
  return 0;
}
