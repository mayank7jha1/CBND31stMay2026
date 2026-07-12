#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// n : [1,10^5] :
// 10^5*10^5*10^5 : 10^15
int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int target;
  cin >> target;

  // 1 sec : Algo Computation  : 10^8
  // n-2*n-1*n : ~ n*n*n : For a very large value : (~n^3)
  for (int fei = 0; fei < n - 2; fei++) {
    int fe = a[fei];
    for (int sei = fei + 1; sei < n - 1; sei++) {
      int se = a[sei];
      for (int tei = sei + 1; tei < n; tei++) {
        int te = a[tei];
        if (fe + se + te == target) {
          cout << fe << " " << se << " " << te << endl;
        }
      }
    }
  }

  return 0;
}
