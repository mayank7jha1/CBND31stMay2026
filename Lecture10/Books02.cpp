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

  // Current Window Markers:
  int sp = 0, ep = 0;
  int tc = 0;
  int count = 0;
  int ans = INT_MIN;

  // Expand till you can:
  for (; ep < n; ep++) {
    // Expansion:
    tc += a[ep]; // You are trying to expand the current window by saying add
                 // this current element time in the time consumed.

    // Shrinking : If Your above assumption was wrong: Shrink the window.
    // Above Assumption : I can take the current element (ep) in the current
    // window. (Undesired Window):
    // Shrinking From the back: When can you say you have an undesired window:
    while (tc > tt and sp <= ep) {
      tc -= a[sp];
      sp++;
    }

    // You are at a desired window: Update:
    //  Updation: If you are here : that means you have a new window :
    //  Update the answer.
    ans = max(ans, ep - sp + 1);
  }

  cout << ans << endl;

  return 0;
}
