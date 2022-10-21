
#include <iostream>

using namespace std;

int main() {
  int a[55];
  char c[100];

  for (int i = 0; i < 55; i++)
    a[i] = i * 2;

  cout << "string?";
  //cin.getline(c, 100);

  cout << "a: " << a << endl
       << "c: " << c << endl;

  for (int i = 0; i < 60; i++)
    cout << "a[" << i << "]: " << a[i] << endl;
  
  return 0;
}
