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
  //  Selection Sort: Find minimum n-1 times and put it at its correct position.
  for (int i = 0; i < n - 1; i++) {
    // Current Range : [i,n-1]:
    // Find minimum in the above range and swap it with the starting of the
    // range.
    int sei = i;
    for (int j = i + 1; j < n; j++) {
      if (a[sei] > a[j]) {
        sei = j;
      }
    }
    // Swapping using function:
    swap(a[i], a[sei]);
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}
