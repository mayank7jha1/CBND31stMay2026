#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int dp[1001][1001]{};
int F(string &s, string &t, int x, int y) {
  // Stopping Point:
  if (x < 0 or y < 0) {
    return 0;
  }

  // Current State: F(x,y):
  if (dp[x][y] != -1) {
    return dp[x][y];
  }

  if (s[x] == t[y]) {
    return dp[x][y] = 1 + F(s, t, x - 1, y - 1);
  } else {
    // S[x]!=t[y]

    // S[x] is not part of LCS.
    int Op1 = F(s, t, x - 1, y);

    // T[y] is not part of LCS.
    int Op2 = F(s, t, x, y - 1);

    return dp[x][y] = max(Op1, Op2);
  }
}

int longestCommonSubsequence(string s, string t) {
  int n = s.length();
  int m = t.length();
  memset(dp, -1, sizeof(dp));
  return F(s, t, n - 1, m - 1);
}

int main() {
  string s, t;
  cin >> s >> t;
  cout << longestCommonSubsequence(s, t) << endl;

  return 0;
}

// https://hack.codingblocks.com/app/contests/10013/281/problem
