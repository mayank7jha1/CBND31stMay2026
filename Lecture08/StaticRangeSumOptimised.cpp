#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Computations : n+k
int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int k;
  cin >> k;

  // Basic Method for Prefix Sum:
  int pre[n]{};

  // Computations : n*(n+1)/2;
  // for (int i = 0; i < n; i++) {
  //   // Current Index tak ka sum prefix[i] me store kardijiye.
  //   int sum = 0;
  //   for (int j = 0; j <= i; j++) {
  //     sum += a[j];
  //   }

  //   // Now I have the sum from 0th index till ith index.
  //   pre[i] = sum;
  // }

  // Compuations : n
  pre[0] = a[0];
  for (int i = 1; i < n; i++) {
    pre[i] = pre[i - 1] + a[i];
  }

  for (int i = 0; i < n; i++) {
    cout << pre[i] << " ";
  }

  // Computations : k
  for (int i = 1; i <= k; i++) {

    int l, r;
    cin >> l >> r;

    if (l == 0) {
      cout << pre[r] << endl;
    } else {
      cout << pre[r] - pre[l - 1] << endl;
    }
  }

  return 0;
}
