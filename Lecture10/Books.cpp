#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n, tt;
  cin >> n >> tt;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int ans = INT_MIN;

  // n*n:
  for (int sp = 0; sp < n; sp++) {
    int count = 0; // From this current starting point : what is the amount of
                   // books you were able to read.

    int tc = 0;
    for (int ep = sp; ep < n; ep++) {
      tc += a[ep];
      if (tc > tt) {
        break;
      }
      count++;
    }

    // Now I have the books able to read for the current stating point: count.
    ans = max(ans, count);
  }

  cout << ans << endl;

  return 0;
}
