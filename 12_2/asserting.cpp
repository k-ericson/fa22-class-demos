#define NDEBUG
#include <cassert>
#include <iostream>

using namespace std;

void printNum(int val);


int main() {
  int val;
  cout << "gimme val: ";
  cin >> val;
  printNum(val);
  
  return 0;
}


void printNum(int val) {
  assert (0 <= val);
  assert (val <= 100);
  cout << "Val is: " << val << endl;
}
