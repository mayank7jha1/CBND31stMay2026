#include <climits>
#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;

// Top Down Dp : (Recursion + Memoisation)
// Mere pass ek dp array tha jisko aap fill kar rahe ho using the recursion.

// dp[n] = F(n) : nth fibonacci Number.
// dp[i] = ith Fibonacci Number.
// Is this question I am sure that there are some states that are repeating.

// Computations : Total number of unique states * Transition Time.
// ~10001*1  ~ 100001 (Linear)
int dp[10001]{};

int F(int x) {

  if (x == 0 or x == 1) {
    return x;
  }

  // Current State: F(x):
  // CHeck if this F(x) has previously been calculated or not?
  // How?
  // Agar ye State pehle se calculated hoga then this state ka answer pakka
  // dp[x] me store hoga.

  // Calculate karne se pehle check:
  if (dp[x] != -1) {
    // If I am here: F(x) has occurred before and its answer is already stored
    // in dp[x] and hence we don't need to compute again.

    return dp[x];
  }

  int op1 = F(x - 1);
  int op2 = F(x - 2);

  // Current State F(x) ka answer is op1+op2;
  // Return karne se pehle store.
  return dp[x] = (op1 + op2);
}

int main() {
  int n;
  cin >> n;

  // We initialise our dp array with a value that can never become your answer.
  //  Since Fibonnaci Number cannot be negative we initialise our dp array with
  //  -1 value.

  // for (int i = 0; i < 100001; i++) {
  //   dp[i] = -1;
  // }

  // memset that is use to initialise any container with value either 0 or -1.
  memset(dp, -1, sizeof(dp));

  // Starting Point: Recursion from Back:
  cout << F(n) << endl;

  return 0;
}
