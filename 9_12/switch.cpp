
#include <iostream>

using namespace std;

int main() {
  char letter_grade;
  cout << "Gimme letter grade: ";
  cin >> letter_grade;
  switch(letter_grade) {
  case 'A' :
  case 'B' :
    cout << "You did well!" << endl;
    cout << "Your score counts for the major." << endl;
    cout << "You should do well in the future!" << endl;
    break;
  case 'C' :
    cout << "Your score counts for the major." << endl;
    cout << "You should be able to pass future courses."
	 << endl;
    cout << "Study hard!" << endl;
    break;
  case 'D' :
  case 'F':
    cout << "Your score does not count for the major." << endl;
    cout << "You will need to repeat the course." << endl;
  }
  
  
  return 0;
}
