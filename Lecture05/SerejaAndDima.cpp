#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int value[n];
  for (int i = 0; i < n; i += 1) {
    cin >> value[i];
  }

  int i = 0, j = n - 1;
  int ss = 0, ds = 0, turn = 1;

  while (i <= j) {

    if (turn % 2 == 1) {
      // This is the chance of sereja.
      if (value[i] > value[j]) {
        ss += value[i];
        i += 1;
      } else {
        ss += value[j];
        j -= 1;
      }

    } else {
      // This is the chance of dima:
      if (value[i] > value[j]) {
        ds += value[i];
        i += 1;
      } else {
        ds += value[j];
        j -= 1;
      }
    }

    turn += 1;
  }

  cout << ss << " " << ds << endl;
  
  return 0;
}
