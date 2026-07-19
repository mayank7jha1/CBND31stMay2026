#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Assumption : Prefix sum will never be negative.

int main() {
  int n;
  cin >> n;
  int a[n]{};
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Build the prefix array:
  int pre[n]{};
  pre[0] = a[0];

  // Assume the first element as the largest till the first element.
  // Assume the largest as minus infinity till you have encountered a element of
  // the array.
  int maxi = pre[0];

  for (int i = 1; i < n; i++) {
    pre[i] = pre[i - 1] + a[i];
    if (pre[i] > maxi) {
      maxi = pre[i];
    }
  }

  // Build the Frequency of this prefix array.
  int freq[maxi + 1]{};
  for (int i = 0; i < n; i++) {
    int ce = pre[i];
    freq[ce]++;
  }

  // Logic : 1. If zero has a freq > 0 in freq array.
  //         2. If any element has freq. > 1 in freq Array .
  //  In any of the above situations I can be sure subarray sum is zero.

  freq[0]++; // Extra Freq given by us so that we can check these two above
             // conditions directly.

  // if (freq[0] > 1) {
  //   cout << "Yes" << endl;
  //   return 0;
  // }

  for (int i = 0; i < maxi + 1; i++) {
    if (freq[i] > 1) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  // If I am here then line 44 and line 50 must not have executed that means
  // subarray sum is not zero.
  cout << "No" << endl;

  return 0;
}
