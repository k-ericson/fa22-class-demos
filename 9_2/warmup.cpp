
#include <iostream>

using namespace std;

int main() {
  int i;
  cout << "number? " << endl;
  cin >> i;
  while(!(i < 0)) {
    cout << i << endl
	 << "number? " << endl;
    cin >> i;
  }
  
  
  return 0;
}
