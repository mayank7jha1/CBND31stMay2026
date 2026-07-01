#include <iostream>
using namespace std;

/*
 * Input and Output Statements : cin/cout
 * Conditional Statements : if/else
 * Repeat/Loop Statements : while
 * Agenda:
 * Jump Statement :
 * Macros :
 * Data Type Modifiers:
 * Questions :
 */

int main() {

  int x;
  cin >> x;
  cout << x << endl;

  // int x{90}; // This will not be allowed.
  // x = 100;
  // cout << x << endl;

  if (89) {
    int x{900}; // Yes now this will be allowed.
    cout << x << endl;
  }

  cout << x << endl;

  return 0;
}
