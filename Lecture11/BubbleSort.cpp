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

  // Computations : ~(n*n)
  //  Bubble Sort: Find maximum n-1 times and put it at its correct position.

  // for (int i = 0; i < n - 1; i++) {
  //   // Current Range : [0,n-1-i]:
  //   // Find maximum in the above range and swap it with the ending of the
  //   // range.
  //   int lei = i;
  //   for (int j = 0; j < n - i - 1; j++) {

  //     if (a[lei] < a[j]) {
  //       lei = j;
  //     }
  //   }
  //   // Swapping using function:
  //   swap(a[n - i - 1], a[lei]);
  // }
  //

  // Computations : ~(n*n)
  //  Bubble Sort: Find maximum n-1 times and put it at its correct position.
  for (int i = 0; i < n - 1; i++) {
    // Current Range : [0,n-i-1] : Find the maximum in the current range and put
    // the maximum at the end of the range.

    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}
