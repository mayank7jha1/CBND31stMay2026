#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// F(x,s) : Maximum Taste by choosing some fruits from xth index till n-1th
// index and maintaining the sum of contribution of the choosen fruits as s.

// F(t,0) : 0
// F(t,l) : where l is not zero : -1e9;
//
// F(x,s) : max(Op1,Op2);
//
// int Op1 = taste[x] + F(x+1,s+taste[x]-k*calorie[x]);
// int Op2 = 0 +F(x+1,s);

int n, k;
int taste[101];
int calorie[101];
int dp[101][200002]{};

int F(int x, int s) {

  // Stopping Point:
  if (x == n) {
    if (s == 0) {
      return 0;
    } else {
      return -1e8;
    }
  }

  // Current State: F(x,s):
  if (dp[x][100001 + s] != -1) {
    return dp[x][100001 + s];
  }

  // You have taken the current fruit in the answer:
  int Op1 = taste[x] + F(x + 1, s + (taste[x] - (k * calorie[x])));

  // You have not taken the current fruit in the answer:
  int Op2 = 0 + F(x + 1, s);

  // Current State ka answer:
  int ans = max(Op1, Op2);

  return (dp[x][100001 + s] = ans);
}

int main() {
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> taste[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> calorie[i];
  }

  for (int i = 0; i < 101; i++) {
    for (int j = 0; j < 200001; j++) {
      dp[i][j] = INT_MIN;
    }
  }

  // Starting Point:
  int ans = F(0, 0);

  if (ans <= 0) {
    cout << "-1" << endl;
  } else {
    cout << ans << endl;
  }

  return 0;
}
