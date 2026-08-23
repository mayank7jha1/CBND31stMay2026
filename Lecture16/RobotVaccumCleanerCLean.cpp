#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int Noise(string &s) {
  int ans = 0;
  int cs = 0;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 's') {
      cs++;
    } else {
      ans += cs;
    }
  }

  return ans;
}

// Comparator:
bool Compare(string x, string y) {
  string xy = x + y;
  string yx = y + x;

  if (Noise(xy) < Noise(yx)) {
    return false;
  } else {
    return true;
  }
}

// void BubbleSort(string a[], int n) {

//   for (int i = 0; i < n - 1; i++) {
//     for (int j = 0; j < n - i - 1; j++) {

//       if (Compare(a[j], a[j + 1]) == 0) {
//         swap(a[j], a[j + 1]);
//       }
//     }
//   }
// }

int main() {
  int n;
  cin >> n;

  string a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // BubbleSort(a, n);
  sort(a, a + n, Compare);

  string final{""};

  for (int i = 0; i < n; i++) {
    final = final + a[i];
  }

  cout << Noise(final) << endl;

  return 0;
}
