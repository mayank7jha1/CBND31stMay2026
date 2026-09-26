#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
int height[100002]{};

// Top Down Dp: Recursion + Memoisation.
//  F(n) : Minimum Cost to reach the 1st stone from the nth stone.
//  F(n) : min(Op1,Op2);
//  int Op1 = abs(height[n]-height[n-1])+F(n-1);
//  int Op2 = abs(height[n]-height[n-2])+F(n-2);
//
//  F(1) = 0;
//
//  //Changing parameters kitne hain : One  : Konse stone par aap khade ho.
//  dp[x] = F(x) ka answer.
//  Computations : ~n * 1 : ~ n : 10^5

int dp[100001]{};

int F(int x) {
  if (x == 1) {
    return 0;
  }

  // Current State : F(x):
  // Check if this state has previously been calculated or not.
  if (dp[x] != -1) {
    // This F(x) has been previously calculated and its answer is stored in
    // dp[x].
    return dp[x];
  }

  // When you have reached the xth stone by taking a 1 step Jump.
  int Op1 = abs(height[x] - height[x - 1]) + F(x - 1);

  // When you have reached the xth stone by taking a 1 step Jump.
  // Op2 can only be computed when that op2 exists.

  int Op2 = INT_MAX; // If this option does not exists then I want its value to
                     // be so large that this never becomes the answer.
  if (x - 2 >= 1) {
    Op2 = abs(height[x] - height[x - 2]) + F(x - 2);
  }

  // Current State ka answer nikal gyaa jo ki min(Op1,Op2) hain.
  return (dp[x] = min(Op1, Op2));
}

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> height[i];
  }

  // Initialse your dp array with a value that can never be the answer.
  memset(dp, -1, sizeof(dp));

  // Recursion from end:
  // Starting Point:
  cout << F(n) << endl;

  return 0;
}
