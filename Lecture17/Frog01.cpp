#include <climits>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
int n;
int height[100002]{};

// Recursion From Start:
// F(x) : Minimum Cost from xth stone till nth stone.

int F(int x) {
  // Stopping Point:
  if (x == n) {
    // Current State : F(n) = 0.
    return 0;
  }

  // Current State : F(x):

  // Minimum Cost from the xth stone till nth stone where from xth stone I have
  // taken a jump of 1 step.
  int Op1 = abs(height[x] - height[x + 1]) + F(x + 1);

  // Minimum Cost from the xth stone till nth stone where from xth stone I have
  // taken a jump of 2 step.
  int Op2 = INT_MAX;

  if (x + 2 <= n) {
    Op2 = abs(height[x] - height[x + 2]) + F(x + 2);
  }

  // Current State : F(x)
  int ans = min(Op1, Op2);

  return ans;
}

// Recursion From Back:
// F1(x) : Minimum Cost from xth stone till 1st stone.

int F1(int x) {

  if (x == 1) {
    return 0;
  }

  int Op1 = abs(height[x] - height[x - 1]) + F1(x - 1);

  int Op2 = INT_MAX;
  if (x - 2 >= 1) {
    Op2 = abs(height[x] - height[x - 2]) + F1(x - 2);
  }

  // Current State: F(x):
  int ans = min(Op1, Op2);

  return ans;
}

int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> height[i];
  }

  // Recursion From Start:
  // Starting Point :
  cout << F(1) << endl;

  // Recursion from End:
  // Starting Point:
  cout << F1(n) << endl;

  return 0;
}
