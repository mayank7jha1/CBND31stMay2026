#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>

using namespace std;

int n, m;
int a[10001]{}, b[10001]{};

// F(x,y): Minimum Difference by making pairs between boys from 0 to n-1 and
// girls from 0 to m-1.

int F(int x, int y) {
  // Stopping Point:
  if (x >= n) {
    return 0;
  }

  if (y >= m) {
    return 1e8;
  }

  // Current State: F(x,y):
  // Current Boy chooses the current girl.
  int Op1 = abs(a[x] - b[y]) + F(x + 1, y + 1);

  // Current Boy doesn't choose the current girl.
  int Op2 = 0 + F(x, y + 1);

  int ans = min(Op1, Op2);
  return ans;
}

int main() {

  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }

  sort(a, a + n);
  sort(b, b + m);

  // Starting Point:
  // Recursion from start:
  cout << F(0, 0) << endl;

  return 0;
}
