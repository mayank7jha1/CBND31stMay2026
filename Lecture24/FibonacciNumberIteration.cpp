#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Bottom UP Dp : Iterative Dp:
//  Think In terms of recursion and Implement in terms of iteration.
//  Recursion from back is quivalent to iterative dp from front.
//  I prefer recursion from back and iteration from front.

// Main agar i par khada hu toh maine i se pehle ke saare state ke answer nikal
// diye hain.
// f(n) = f(n-1)+f(n-2)
// dp[n]=dp[n-1]+dp[n-2]
//
// dp[i] = dp[i-1] + dp[i-2] where i goes from 2 to i.
// dp[0] = 0;
// dp[1] = 1;

int main() {
  int n;
  cin >> n;

  // You are directly Building the dp array.
  // Main ye keh raha hu main har dp array ke index ko fill karunga.
  // Computations : ~10^5 * 1
  int dp[100001]{};

  dp[0] = 0;
  dp[1] = 1;

  for (int i = 2; i <= n; i++) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }

  cout << dp[n] << endl;

  return 0;
}
