#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define mod 1000000007
#define int long long

int k;

// F(n): Total ways to eat n flowers.
// F(n) : F(n-1) + F(n-k)
// F(0) : 1

int dp[100005]{};  // dp[i] : Number of ways to eat i flowers.
int pre[100005]{}; // pre[i] : Number of ways to eat flowers from 0 to i.

int F(int n) {

  // Stopping Point :
  if (n == 0) {
    return 1;
  }

  // Current State : F(n):
  if (dp[n] != -1) {
    return dp[n];
  }

  int Op1 = F(n - 1) % mod;
  int Op2 = 0;

  if (n - k >= 0) {
    Op2 = F(n - k) % mod;
  }

  // Current State : F(n);
  int ans = (Op1 % mod + Op2 % mod) % mod;

  return dp[n] = (ans % mod);
}

int32_t main() {
  int t;
  cin >> t >> k;
  memset(dp, -1, sizeof(dp));
  F(100002); // Maine dp array fill kardiya hain for 0 to 100002.

  // Build the prefix array:
  pre[0] = dp[0];
  for (int i = 1; i < 100002; i++) {
    pre[i] = pre[i - 1] + dp[i];
  }

  for (int i = 1; i <= t; i++) {
    int a, b;
    cin >> a >> b;

    //     int sum = 0; // a se lekar b flower ko khane ke total ways.
    //     for (int j = a; j <= b; j++) {
    //       // Starting Point:
    //
    //       sum += F(j);
    //     }

    if (a == 0) {
      cout << pre[b] << endl;
    } else {
      cout << pre[b] - pre[a - 1] << endl;
    }
  }

  return 0;
}
