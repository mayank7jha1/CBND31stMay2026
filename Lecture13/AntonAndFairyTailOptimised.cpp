#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define int long long

int32_t main() {

  int n, m;
  cin >> n >> m;

  if (n <= m) {
    cout << n << endl;
    return 0;
  }

  int s = 0, e = 2e9;
  int ans = -1;

  while (s <= e) {

    int mid = (s + e) / 2;
    int leftSide = (mid * (mid + 1)) / 2;
    int rightSide = n - m;

    if (leftSide >= rightSide) {
      ans = mid;
      e = mid - 1;
    } else {
      s = mid + 1;
    }
  }

  cout << m + ans << endl;

  return 0;
}
