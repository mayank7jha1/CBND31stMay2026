#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int c0 = 0, c1 = 0;
  int pc = -1;

  char ch;

  while (cin >> ch) {

    if (ch == '0') {
      // Current Character is Zero.
      if (pc == 0 or pc == -1) {
        c0 += 1;
        if (c0 >= 7) {
          cout << "Yes" << endl;
          return 0;
        }

      } else {

        c0 = 1;
      }
      pc = 0;

    } else {

      // Current Character is One.
      if (pc == 1 or pc == -1) {
        c1 += 1;
        if (c1 >= 7) {
          cout << "Yes" << endl;
          return 0;
        }
      } else {
        c1 = 1;
      }
      pc = 1;
    }
  }

  // You have read all the characters and have not found any pattern of
  // consecutive 0 or 1 7 times.
  cout << "No" << endl;

  // char ch1 = 'M';
  // int l = ch1; // Type Casting : Explicit :
  // cout << l << endl;

  return 0;
}
