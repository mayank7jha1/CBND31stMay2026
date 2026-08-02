#include <algorithm>
#include <climits>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {

  // int x{10}, y{30}, z{400};

  // cout << min(x, y) << endl;
  // cout << max(x, y) << endl;

  // cout << max(x, max(y, z)) << endl;
  // cout << max(x, max(y, max(z, 30))) << endl; // Iostream vala.

  // // {}: Collection of elements ko represent karne ke liye use kiye jaate
  // hain.

  // cout << max({x, y, z}) << endl;
  // cout << max({x, y, z, 30}) << endl; // Algorithm vala.
  // cout << min({x, y, z}) << endl;
  // cout << pow(3, 5) << endl;

  // By Default the precision of cout is upto 6 significant digits.

  double x{356.322133422343244};
  cout << x << endl;
  // Upto 10 significant digit tak laake deta hain.
  cout << setprecision(10) << x << endl;
  cout << x << endl;
  cout << fixed << setprecision(10) << x << endl;

  cout << sin(30) << endl;
  cout << cos(30) << endl;

  // Algorithms ke functions me fixed pattern hain:

  int a[]{3, 2, 1, 4, 6, 7};

  int n = sizeof(a) / sizeof(int);
  // cout << n << endl;

  // This will sort the array from 1st index till 3rd index.
  // sort(a + 0, a + n);
  sort(a + 1, a + 4);
  reverse(a, a + n);

  return 0;
}
