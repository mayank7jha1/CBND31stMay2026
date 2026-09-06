#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// F(x,y) : Minimum Operations to convert s from 0 to xth index to string t from
// 0 to yth index.

int F(string &s, string &t, int x, int y) {
  // Stopping Point:
  if (x < 0) {
    return (y + 1);
  }

  if (y < 0) {
    return (x + 1);
  }

  // Current State: F(x,y):

  if (s[x] == t[y]) {
    return F(s, t, x - 1, y - 1);
  }

  // You delete the current character of string s.
  int Op1 = F(s, t, x - 1, y);

  // You replace the current character of string s with the current character of
  // string t.
  int Op2 = F(s, t, x - 1, y - 1);

  // You insert a character after the current character of string s.
  int Op3 = F(s, t, x, y - 1);

  // Current State:F(x,y):
  int ans = 1 + min({Op1, Op2, Op3});

  return ans;
}

int minDistance(string s, string t) {
  int n = s.length();
  int m = t.length();

  // Recursion from back:
  // Starting Point:
  return F(s, t, n - 1, m - 1);
}

int main() {

  string s, t;
  cin >> s >> t;

  cout << minDistance(s, t) << endl;
  return 0;
}
