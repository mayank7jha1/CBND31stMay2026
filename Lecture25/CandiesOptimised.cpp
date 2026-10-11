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
// (101*100001)*2
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

  // Current State : F(n,k) whose answer is stored in dp[n][k];
  int Part1 = F(n, k - 1) % mod;
  int Part2 = F(n - 1, k) % mod;
  int Part3 = 0;
  if (k - a[n] - 1 >= 0) {
    Part3 = F(n - 1, k - a[n] - 1) % mod;
  }

  int ans = (Part1 % mod + Part2 % mod - Part3 % mod + mod) % mod;

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
