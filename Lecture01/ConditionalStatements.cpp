#include <iostream>
using namespace std;

/*
 * Conditional Statements :
 * 1. if/else/ifelse
 * 2. Switch
 * 3. Ternary Operator ?:
 */

int main() {

  int x;
  cin >> x;
  // if (x > 100) {
  //   cout << "Hello" << endl;
  // } else {
  //   cout << "No" << endl;
  // }

  if (x > 100) {
    cout << "Yes" << endl;
  } 
  if (x < 200) {
    cout << "hi" << endl;
  } 
 
  if (x < 300) {
    cout << "yo" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
