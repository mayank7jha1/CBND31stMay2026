#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char ch;
  while (cin.get(ch)) {

    // Current Character : ch:
    // Mujhe is ch ko pehle check karna hai ki vo capital hain ki small:
    if (ch >= 65 and ch <= 90) {
      // This ch is a capital character :
      // Convert it into small case:
      ch += 32;
    } else if (ch >= 'a' and ch <= 'z') {
      // This ch is a small case character :
      //  Comvert it into capital case:
      ch -= 32;
    }

    // Diplay the current character after the conversion.
    cout << ch;
  }

  return 0;
}
