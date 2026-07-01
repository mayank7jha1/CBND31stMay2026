#include <iostream>
using namespace std;

// This variable is defined in global memory.
int x{100};
// cout << x << endl;not allowed.

int main() {

  int x{50};
  cout << x << endl;

  if (true) {
    x += 10;
    int x{400};
    x += 10;
    cout << x << endl;
    if (true) {
      x += 10;
      cout << x << endl;
    }
    x += 10;
    cout << x << endl;
  }

  x += 10;
  cout << x << endl;
  return 0;
}
