
#include <iostream>

using namespace std;

void printNum(int x);
int rgcd(int a, int b);

int main() {
  cout << "num?";
  int n;
  cin >> n;
  printNum(n);

  int v;
  cout << "num2?";
  cin >> v;
  cout << rgcd(n, v);
  
  return 0;
}

void printNum(int x) {
  if (x < 0)
    return;
  cout << x << endl;
  printNum(x - 1);
  cout << x << endl;
}

int rgcd(int a, int b) {
  // while b!=0
  // 	     t = b
  // 	     b = a mod b
  // 	     a = t
  //   return a
  if (b == 0)
    return a;
  return rgcd(b, a % b);
}
