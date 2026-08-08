#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define int long long

int32_t main() {
  int n, m;
  cin >> n >> m;

  if (n <= m) {
    cout << n << endl;
    return 0;
  }

  int day = 1;
  int BG = n;

  while (BG > 0) {
    BG -= day;
    if (BG <= 0) {
      break;
    }
    day++;
    BG += m;
    if (BG > n) {
      BG = n;
    }
  }

  cout << day << endl;

  return 0;
}
