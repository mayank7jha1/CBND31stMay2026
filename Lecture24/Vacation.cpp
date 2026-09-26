#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 1e5 + 2;
int a[N]{}, b[N]{}, c[N]{};

// dp[n][x] = F(n,x) : Maximum Happiness till the nth day while performing
// activity x on the nth day.

int dp[100002][3]{};
// Computations : Number of Unique States * Transition Time
// 100002 * 3 * 1

int F(int n, int x) {
  // Current State : F(n,x)
  // Stopping Point:
  if (n == 0) {
    // Yaha par F(0,x) state ki baat horahi hain.
    return 0;
  }

  // Current State : F(n,x):

  if (dp[n][x] != -1) {
    return dp[n][x];
  }

  // Abhi aap konse day par khade ho: nth day par khade ho uske liye ek bar kaam
  // aap karo baaki recursion karega.

  int Op1 = 0, Op2 = 0, Op3 = 0;

  // nth day par aap activity a ko kar rahe ho:
  if (x == 0) {
    Op1 = a[n] + max(F(n - 1, 1), F(n - 1, 2));
  }

  // nth day par aap activity b ko kar rahe ho:
  if (x == 1) {
    Op2 = b[n] + max(F(n - 1, 0), F(n - 1, 2));
  }

  // nth day par aap activity c ko kar rahe ho:
  if (x == 2) {
    Op3 = c[n] + max(F(n - 1, 0), F(n - 1, 1));
  }

  // Current State: F(n,x) iska answer hai vo humne ans naam ke variable me
  // store kiya.

  int ans = max({Op1, Op2, Op3});

  return (dp[n][x] = ans);
}

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> a[i] >> b[i] >> c[i];
  }

  // Initialise my dp array with a value that can never become the answer.
  memset(dp, -1, sizeof(dp));

  // Recursion From Back:
  // Starting Point:
  int Op1 = F(n, 0);
  int Op2 = F(n, 1);
  int Op3 = F(n, 2);

  cout << max({Op1, Op2, Op3}) << endl;

  return 0;
}
