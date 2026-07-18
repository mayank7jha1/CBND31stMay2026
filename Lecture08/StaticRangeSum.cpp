#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Main Logic :
  // For every Query take input of l and r and find the sum of the array
  // from l to r.

  int k;
  cin >> k;

  // Computations : n*k and if n and k both are 10^5 ki range then computations
  // : 10^10
  for (int i = 1; i <= k; i++) {
    int l, r;
    cin >> l >> r;

    // Now I want the sum of the array from this l index to r index.
    int sum = 0;
    for (int j = l; j <= r; j++) {
      sum += a[j];
    }

    // Now I have the answer for the current query:
    cout << sum << endl;
  }

  return 0;
}
