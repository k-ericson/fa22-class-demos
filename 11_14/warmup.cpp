
#include <iostream>

using namespace std;

const int ROWS = 10;
const int COLS = 12;

void flood(int r, int c, char** steve);
void print(char** bob);

int main() {
  char** dynamite = NULL;
  dynamite = new char*[ROWS];
  for(int i = 0; i < ROWS; i++) {
    dynamite[i] = new char[COLS];
    for (int j = 0; j < COLS; j++) {
      dynamite[i][j] = '*';
    }
  }

  flood(1, 2, dynamite);
  
  return 0;
}

void print(char** bob) {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      cout << bob[i][j];
    }
    cout << endl;
  }
}

void flood(int r, int c, char** steve) {
  if (r >= ROWS)
    return;
  if (c >= COLS)
    return;
  if (r < 0 || c < 0)
    return;
  if (steve[r][c] == '#')
    return;

  steve[r][c] = '#';
  print(steve);
  char s;
  cin.get(s);
  
  flood(r, c - 1, steve);
  flood(r, c + 1, steve);
  flood(r - 1, c, steve);
  flood(r + 1, c, steve);
}
