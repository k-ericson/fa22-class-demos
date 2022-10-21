
#include <iostream>

using namespace std;

int main() {
  for (int i = 10; i >= 0; i -= 2) {
    cout << i << endl;
  }

  int i = 10;
  while (i != 0) {
    cout << i << endl;
    i -= 3;
  }
  
  return 0;
}
