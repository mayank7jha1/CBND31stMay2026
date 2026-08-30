#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Recursion from Start:
//  F(1,1) : Minimum Steps to reach n from 1,1.
//  F(n,y) or F(x,n) = 0;
//  F(x,y)= Min(F(x+y,y),F(x,x+y))+1;

int n;

int F(int x, int y) {

  // Stopping Point 01:
  if (x == n or y == n) {
    return 0;
  }

  // Stopping Point 02:
  if (x > n or y > n) {
    return 1e8;
  }

  // Current State : F(x,y):

  // Minimum Steps to reach n from x+y,y.
  int Op1 = F(x + y, y);

  // Minimum Steps to reach n from x,y+x.
  int Op2 = F(x, y + x);

  // Current State : F(x,y);
  int ans = 1 + min(Op1, Op2);

  return ans;
}

int main() {
  cin >> n;

  // Starting Point :
  cout << F(1, 1) << endl;

  return 0;
}
