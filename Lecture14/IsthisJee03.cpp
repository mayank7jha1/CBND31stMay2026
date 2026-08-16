#include <algorithm>
#include <climits>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;
#define PI 3.1415926

double F1(double x, double b, double c) {
  double ans = (((2 * x + b) * sin(x)) - ((x * x) + (b * x) + c) * cos(x));
  return ans;
}

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

    double s = 0, e = PI / 2;

    double ans = 0;
    while (e - s > 1e-6) {
      double m1 = (s + (e - s) / 3);
      double m2 = (e - (e - s) / 3);

      if (F(m1, b, c) > F(m2, b, c)) {
        s = m1 + 1e-6;
        ans = m2;
      } else if (F(m1, b, c) < F(m2, b, c)) {
        e = m2 - 1e-6;
        ans = m1;
      } else {
        s = m1 + 1e-6;
        e = m2 - 1e-6;
        ans = m1;
      }
    }

    cout << fixed << setprecision(10) << F(ans, b, c) << endl;
  }

  return 0;
}
