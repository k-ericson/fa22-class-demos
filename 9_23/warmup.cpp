#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int nums[12][12];

  for(int i = 1; i <= 12; i++) {
    for (int j = 1; j <= 12; j++) {
      nums[i - 1][j - 1] = i * j;
      cout << setw(4) << left << nums[i - 1][j - 1] << " ";
    }
    cout << endl;
  }
  
  return 0;
}
