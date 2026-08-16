#include <algorithm>
#include <climits>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;
#define PI 3.1415926

double F(double x, double b, double c) {
  double ans = (((x * x) + (b * x) + c) / sin(x));
  return ans;
}

// Computation :
int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    double b, c;
    cin >> b >> c;

    double step = 1e-6; // 1*10^-6.
    double mini = 1e18;

    for (double x = step; x <= PI / 2; x += step) {
      double cfv = F(x, b, c);
      mini = min(mini, cfv);
    }

    cout << fixed << setprecision(10) << mini << endl;
  }

  return 0;
}
