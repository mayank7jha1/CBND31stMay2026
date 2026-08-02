#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int Solve(int q[], int n) {
  // cout << p << endl;
  // cout << *p << endl;
  // cout << *(p + 1) << endl;
  // cout << p[1] << endl;

  q[2] = 90;
  n = 100;

  return 1;
}

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Arrays are always passed by address/reference.
  cout << a << endl;
  cout << n << endl;

  cout << Solve(a, n) << endl;
  cout << a[2] << endl;
  cout << n << endl;

  return 0;
}
