#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int c0 = 0, c1 = 0;

  char ch;
  while (cin >> ch) {
    if (ch == '0') {
      c0 += 1;
    } else {
      c1 += 1;
    }
  }

  // if (c0 > 7 or c1 > 7) {
  //   cout << "Yes" << endl;
  // } else {
  //   cout << "No" << endl
  // }

  cout << c0 << " " << c1 << endl;

  return 0;
}
