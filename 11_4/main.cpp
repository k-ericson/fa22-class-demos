
#include <iostream>

using namespace std;
int loopFact(int n);
int rFact(int n);

int main() {
  int x;
  cout << "Gimme num: ";
  cin >> x;
  cout << "Fact: " << loopFact(x) << endl;
  cout << "rFact: " << rFact(x) << endl;
  
  return 0;
}

int loopFact(int n) {
  int total = 1;
  for (int i = 1; i <= n; i++) {
    total *= i;
  }
  return total;
}

int rFact(int n) {
  if (n == 0)
    return 1;

  return n * rFact(n - 1);
}
