#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define mod 1000000007
#define int long long

// dp[n] = F(n): Total ways to eat n flowers.
// dp[n] = F(n) : F(n-1) + F(n-k)
// dp[0] = F(0) : 1
int dp[1005]{};
int pre[1005]{};

int32_t main() {
  int t, k;
  cin >> t >> k;

  // Build the dp array:
  dp[0] = 1;
  dp[1] = 1;

  for (int i = 2; i <= 1002; i++) {

    int Op1 = dp[i - 1] % mod;
    int Op2 = 0;
    if (i - k >= 0) {
      Op2 = dp[i - k] % mod;
    }

    dp[i] = (Op1 % mod + Op2 % mod) % mod;
  }

  // Build the prefix array:
  pre[0] = dp[0];
  for (int i = 1; i < 1002; i++) {
    pre[i] = pre[i - 1] + dp[i];
  }

  for (int i = 1; i <= t; i++) {
    int a, b;
    cin >> a >> b;
    if (a == 0) {
      cout << pre[b] << endl;
    } else {
      cout << pre[b] - pre[a - 1] << endl;
    }
  }

  return 0;
}
