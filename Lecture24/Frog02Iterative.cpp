#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
int height[100002]{};

//  F(n) : Minimum Cost to reach the 1st stone from the nth stone.
//  dp[i] : min(Op1,Op2);
//  int Op1 = abs(height[n]-height[n-1])+dp[i-1];
//  int Op2 = abs(height[n]-height[n-2])+dp[i-2];
//
// where i goes from 2 se n tak.
//
//  dp[1] = 0;

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> height[i];
  }

  int dp[100002]{};
  //   dp[1] = 0;
  //   dp[2] = abs(height[1] - height[2]);
  //
  //   for (int i = 3; i <= n; i++) {
  //
  //     int Op1 = abs(height[i] - height[i - 1]) + dp[i - 1];
  //     int Op2 = abs(height[i] - height[i - 2]) + dp[i - 2];
  //
  //     // Current State: Dp[i]:
  //     dp[i] = min(Op1, Op2);
  //   }
  //
  //   cout << dp[n] << endl;

  dp[1] = 0;

  for (int i = 2; i <= n; i++) {

    int Op1 = abs(height[i] - height[i - 1]) + dp[i - 1];
    
    int Op2 = INT_MAX;
    if (i - 2 >= 1) {
      Op2 = abs(height[i] - height[i - 2]) + dp[i - 2];
    }

    // Current State: Dp[i]:
    dp[i] = min(Op1, Op2);
  }

  cout << dp[n] << endl;

  return 0;
}
