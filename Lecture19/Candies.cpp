#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define mod 1000000007
#define int long long
const int N = 1e5 + 2;
int a[N]{};
int dp[101][N]{};

// F(n,k) : Number of ways to distribue k candies amound n children.

//_ _ _ _ _ _ _ _ _ _ : Computations : Number of Unique States * Transition Time
//:
// (a[1]*a[2]*a[3]_ _ _ _ _ _ _ )*k
// (101*100001)*10^5
//

int F(int n, int k) {
  // Stopping Point:
  if (n == 1) {
    if (k <= a[1]) {
      return 1;
    } else {
      return 0;
    }
  }

  // Current State: F(n,k):
  if (dp[n][k] != -1) {
    return dp[n][k];
  }

  int MaximumCandyICanHave = min(k, a[n]);

  // This answer variable will store the current state ka answer:
  int ans = 0;
  for (int i = 0; i <= MaximumCandyICanHave; i++) {
    ans += (F(n - 1, k - i)) % mod;
    ans %= mod;
  }

  // Current State: F(n,k): Iska answer ab mere pass hain:
  return (dp[n][k] = ans);
}

int32_t main() {
  int n, k;
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  memset(dp, -1, sizeof(dp));

  // Recursion from back:
  //  Starting Point:
  cout << F(n, k) << endl;

  return 0;
}
