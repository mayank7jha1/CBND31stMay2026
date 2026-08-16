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
    int count = 0;
    double ans = 0;
    while (s <= e) {

      double mid = (s + e) / 2;

      if (F1(mid, b, c) > 0) {
        e = mid;
        ans = mid;
      } else {
        s = mid;
        ans = mid;
      }

      count++;
      if (count > 100) {
        break;
      }
    }

    cout << fixed << setprecision(10) << F(ans, b, c) << endl;
  }

  return 0;
}
