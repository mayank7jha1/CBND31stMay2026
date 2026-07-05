#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int c0 = 0, c1 = 0;
  int pc = -1;
  // I will initialise it with a value that can never become my answer.

  char ch;
  while (cin >> ch) {

    if (ch == '0') {
      // Current Character is Zero.
      if (pc == ch or pc == -1) {
        c0 += 1;
      } else {
        c0 = 1;
      }

      // Update the previous character before going to the next character.
      // pc = ch;

    } else {
      // Current Character is One.
      if (pc == ch or pc == -1) {
        c1 += 1;
      } else {
        c1 = 1;
      }

      // Update the previous character for the next character :
      // pc = ch;
    }

    // For my next character reading update previous:
    pc = ch;
  }

  return 0;
}
