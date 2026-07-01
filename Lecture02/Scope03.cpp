#include <iostream>
using namespace std;

// Global Variable :
int x{100};
//:: Scope Resolution Operator
// int x{90};Not Allowed.

int main() {

  int x{120};
  x += 10;
  ::x = ::x + 10;
  cout << x << endl;
  cout << ::x << endl;

  // if (true) {
  //   int x{80};
  //   x += 10;
  // }

  // cout << x << endl;

  return 0;
}
