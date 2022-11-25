
#include <iostream>

using namespace std;

int main() {
  int x = 12;
  int *y = &x;

  cout << "x: " << x << endl;
  cout << "y: " << y << endl;
  cout << "&x: " << &x << endl;
  cout << "&y: " << &y << endl;
  cout << "*y: " << *y << endl;
  *y = 99;
  cout << "*y: " << *y << endl;
  cout << "x: " << x << endl;

  int *z = new int[3000];
  cout << "z: " << z << endl;
  cout << "&z: " << &z << endl;
  
  return 0;
}
