#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];
  int maxi = INT_MIN;
  int sum = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (maxi < a[i]) {
      maxi = a[i];
    }
    sum += a[i];
  }

  if (sum % 2 == 1) {
    cout << "No" << endl;
    return 0;
  }

  sum /= 2;

  // This is for prefix :
  int pre[n];
  pre[0] = a[0];
  for (int i = 1; i < n; i++) {
    pre[i] = pre[i - 1] + a[i];
  }

  int freq[maxi + 1]{};

  // Make divison on every index for part 1 and check if it is a desired
  // division or not.

  for (int i = 0; i < n; i++) {
    int OriginalElement = a[i];
    freq[OriginalElement]++;

    int MissingElement = pre[i] - sum;
    // Now I need to check if this missing element is present in the freq array
    // till now or not.

    if (MissingElement > 0) {
      if (freq[MissingElement] > 0) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  // This is for Suffix :
  int suffix[n]{};
  suffix[n - 1] = a[n - 1];
  for (int i = n - 1; i >= 0; i--) {
    suffix[i] = suffix[i + 1] + a[i];
  }

  int freq1[maxi + 1]{};

  for (int i = n - 1; i >= 0; i--) {
    int OriginalElement = a[i];
    freq1[OriginalElement]++;

    int MissingElement = suffix[i] - sum;
    
    if (MissingElement > 0) {
      if (freq1[MissingElement] > 0) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "NO" << endl;

  return 0;
}
