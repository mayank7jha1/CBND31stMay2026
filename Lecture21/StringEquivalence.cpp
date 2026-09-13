#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int n;

// F(x,ch) : Fill the output array from xth index till n-1th index where the
// maximum  character you can put at the xth index is ch or you can put any
// character from a to ch at the xth index.

char output[15];

void F(int x, char mx) {
  // Stopping Point:
  if (x == n) {
    output[x] = '\0';
    cout << output << endl;
    return;
  }

  // Current State : F(x,ch):
  for (char z = 'a'; z <= mx; z++) {
    output[x] = z;

    if (z == mx) {
      F(x + 1, mx + 1);
    } else {
      F(x + 1, mx);
    }

    
  }

  return;
}

int main() {

  cin >> n;

  // Recursion From Start:
  // Starting POint:
  //
  F(0, 'a');

  return 0;
}
