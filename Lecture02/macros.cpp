#include <iostream>
using namespace std;
#define PI 3.14

/* Macros :
 * Constant variables :
 * 1. Using a keyword const aap sirf variable kesath use nahi karte
 * 2. Using a macro
 *
 * You always need to initialise the constant variable.
 */

// Global Memory
const int x{100};

int main() {

  // Local Memory to main.
  const int x{10};

  // x += 10; // Not Allowed.

  if (true) {
    // x += 10; ?? Kya yaha par change allow hoga?
    const int x{90}; // Ye allowed hain.
    // x += 10;         // Kya ye run hoga?
  }

  // x+=10;
  //
  cout << PI << endl;

  return 0;
}
