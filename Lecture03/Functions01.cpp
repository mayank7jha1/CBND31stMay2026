#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

/*
 * Generic Programming:
 * 1. Overloading : Function Overloading:
 * 2. Default Arguments
 * 3. Templates:
 */

// Function Definition:
// int Sum(int a, int b) {
//   int ans = a + b;
//   return ans;
// }

// int Sum(int a, int b, int c) {
//   // Check:
//   return (a + b + c);
// }

// int Sum(int a, int b, int c, int d) {
//   // Check;
//   return (a + b + c + d);
// }

// Not Allowed.
// double Sum(int a, int b, int c, int d) {
//   // Check;
//   return (a + b + c + d);
// }

// double Sum(int a, int b, double c, double d) {
//   // Check:
//   return (a + b + c + d);
// }
//

// <> : Template :
template <typename T1, typename T2>
T1 sum(T1 a = 0, T1 b = 0, T2 c = 0, T2 d = 0) {
  // Check:
  return (a + b + c + d);
}

template <typename M> M Solve() {}

int main() {

  int x, y;
  cin >> x >> y;

  // Function Call :
  int ans = sum<double, int>(100);
  cout << ans << endl;

  return 0;
}
