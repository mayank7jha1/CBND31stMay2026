#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Recursion from Front :
// F(a) : Multiply x from a to y.

// Recursion From Back:
// F(a) : Multiply x, a times.

int x, y;

// Definition :
int F(int d) {
  // Current State : F(d)
  // Stopping Point :
  if (d == y) {
    // Current State : F(y): Multiply x from y to y.
    // The answer for this state is x so directly returning it.
    return x;
  }

  // Current State : F(d) : I want to calculate the answer for the current
  // state.
  // This variable will store the answer for the current state:
  int ans = x * F(d + 1);

  // Now I have the answer for the current state F(d).
  return ans;
}

int F1(int d) {
  // Stopping Point:
  if (d == 1) {
    // Current State is : F(1) : Multiply x, 1 times.
    return x;
  }

  // Current State : F(d)
  int ans = x * F1(d - 1);

  // Current State ka answer ab mere pass hai which is stored in answer.
  return ans;
}

int main() {

  cin >> x >> y;

  // Starting Point :
  // Recursion From Front :
  cout << F(1) << endl;

  // Starting Point :
  //  Recursion From Back :
  cout << F1(y) << endl;

  return 0;
}
