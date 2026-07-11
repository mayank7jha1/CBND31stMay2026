#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int target;
  cin >> target;

  for (int fei = 0; fei < n; fei++) {
    // For this current fei try to find the second element which satisfy our
    // condition.

    int fe = a[fei];
    int pse = target - fe;

    // We need to find this se in the entire array: Linear Search:
    for (int sei = fei + 1; sei < n; sei++) {
      if (a[sei] == pse) {
        // Now I have fe and se : I now have the entire pair whose sum is equal
        // to target.
        cout << fe << " " << pse << endl;
      }
    }
  }

  return 0;
}
