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
  int x;
  cin >> x;

  // First Occurrence of x:
  int fo = n;
  for (int i = 0; i < n; i++) {
    if (a[i] == x) {
      fo = i;
      break;
    }
  }

  // Last Occurrence of x:
  int lo = n;
  for (int i = 0; i < n; i++) {
    if (a[i] == x) {
      lo = i;
    }
  }

  cout << fo << " " << lo << endl;

  int fo1 = n, lo1 = n;
  for (int i = 0; i < n; i++) {
    if (a[i] == x) {
      if (fo1 == n) {
        fo1 = i;
      }
      lo1 = i;
    }
  }

  cout << fo1 << " " << lo1 << endl;

  return 0;
}
