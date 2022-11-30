#include <string>
#include <iostream>

using namespace std;

void myFun(int x);

int main() {
  try{
    myFun(3);
    myFun(-3);
    myFun(12);
  } catch (int y) {
    cerr << "bad things, y was thrown: " << y << endl;
  } catch (double u) {
    cerr << "bad double: " << u << endl;
  } catch (char const* s) {
    cerr << "error message: " << s << endl;
  } catch (...) {
    cerr << "something was thrown.." << endl;
  }
  return 0;
}

void myFun(int x) {
  cout << "got input: " << x << endl;
  if (x < 0) {
    string s = "bad string";
    throw s;
  }
}
