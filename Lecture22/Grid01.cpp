#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define endl "\n"
#define mod 1000000007
int h, w;
char matrix[1001][1001];

// F(x,y) : Total ways to reach 1,1 from x,y.
int F(int x, int y) {
  if (x == 1 and y == 1) {
    // Current State : F(1,1) : 1;
    return 1;
  }

  if (matrix[x][y] != '.') {
    return 0;
  }

  // Current State : F(x,y) :
  int Op1 = 0, Op2 = 0;

  // First I am going up:
  if (x - 1 >= 1) {
    Op1 = F(x - 1, y) % mod;
  }

  // Second I am going Left:
  if (y - 1 >= 1) {
    Op2 = F(x, y - 1) % mod;
  }

  // Current State : F(x,y):

  int ans = (Op1 % mod + Op2 % mod) % mod;

  return (ans % mod);
}

int main() {

  cin >> h >> w;
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      cin >> matrix[i][j];
    }
  }

  // Starting Point : Recursion from Back:
  cout << F(h, w) << endl;

  return 0;
}




