#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char ch;
  int cc = 0, cs = 0, ce = 0;
  while (cin.get(ch)) {

    // Current Character : ch:
    // Mujhe is ch ko pehle check karna hai ki vo capital hain ki small:
    if (ch >= 65 and ch <= 90) {
      // This ch is a capital character :
      // Convert it into small case:
      // ch += 32;
      cc += 1;
    } else if (ch >= 'a' and ch <= 'z') {
      // This ch is a small case character :
      //  Comvert it into capital case:
      // ch -= 32;
      cs += 1;
    } else {
      ce += 1;
    }

    // Diplay the current character after the conversion.
    // cout << ch;
  }

  cout << cc << " " << cs << " " << ce << endl;

  return 0;
}
