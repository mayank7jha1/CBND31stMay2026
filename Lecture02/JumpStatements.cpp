#include <iostream>
using namespace std;

/*
 * Jump Statements (1&2): Can only be applied on repeat statements
 * 1. Break
 * 2. Continue
 * 3. goto (x)
 *
 *
 */

int main() {

  // int x{100};

  // if (x > 900) {
  //   cout << x << endl;
  //   // Jump statements (1&2) will make no sense here?
  // }

  // Starting Point:
  int c = 1;

  // Stoppint Point:
  while (c <= 10) {
    // int x = 1;

    // Task:
    cout << c << " ";
    if (c == 5) {
      c += 1;
      continue; // End par lejata hain directly skipping all the contents of in
                // between lines.
    }

    cout << "I am a boy" << endl;
    // Next State:
    c += 1;
    // x += 1;
  }

  // You will only move out of this box when c fails the condition.
  // cout << c << endl;

  // Error : You don't have x in the current box.
  //  cout<<x<<endl;

  return 0;
}
