#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int F(string &s, string &t, int x, int y) {
  // Stopping Point:
  if (x < 0 or y < 0) {
    return 0;
  }

  // Current State: F(x,y):

  if (s[x] == t[y]) {
    return 1 + F(s, t, x - 1, y - 1);
  } else {
    // S[x]!=t[y]

    // S[x] is not part of LCS.
    int Op1 = F(s, t, x - 1, y);

    // T[y] is not part of LCS.
    int Op2 = F(s, t, x, y - 1);

    return max(Op1, Op2);
  }
}

int longestCommonSubsequence(string s, string t) {
  int n = s.length();
  int m = t.length();
  return F(s, t, n - 1, m - 1);
}

int main() {
  string s, t;
  cin >> s >> t;
  cout << longestCommonSubsequence(s, t) << endl;

  return 0;
}
