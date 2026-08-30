#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// F(x,y) : Minimum steps to reach 1,1 from x,y.
// F(1,1) : 0

int n;
int F(int x, int y) {
  if (x == 1 and y == 1) {
    return 0;
  }

  int Op1 = 1e8;
  int Op2 = 1e8;

  if (x - y > 0) {
    Op1 = 1 + F(x - y, y);
  }

  if (y - x > 0) {
    Op2 = 1 + F(x, y - x);
  }

  int ans = min(Op1, Op2);

  return ans;
}

int main() {
  cin >> n;

  int ans = INT_MAX;
  for (int i = 1; i <= n / 2; i++) {

    // Starting Points:
    int check = F(i, n - i);
    int val = 1 + check;
    ans = min(ans, val);
  }

  cout << ans << endl;

  return 0;
}
