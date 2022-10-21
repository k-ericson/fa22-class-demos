#include <fstream>
#include <iostream>

using namespace std;

int main() {
  int aname[500][505];
  for (int i = 0; i < 500; i++) {
    for (int j = 0; j < 505; j++) {
      int help = j % 4;
      if (help == 0)
	aname[i][j] = 0;
      else if (help == 1 || help == 3)
	aname[i][j] = 125;
      else
	aname[i][j] = 255;
    }
  }

  ofstream pic;
  pic.open("pic.pgm");
  pic << "P2\n#file: pic.pgm\n505 500\n255\n";
  for (int i = 0; i < 500; i++) {
    for (int j = 0; j < 505; j++) {
      pic << aname[i][j] << " ";
    }
    pic << "\n";
  }

  pic.flush();
  pic.close();
  
  return 0;
}
