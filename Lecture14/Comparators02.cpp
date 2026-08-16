#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

bool compare(int x, int y) {
  if (x < y) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n, compare);
  // sort(a, a + n, greater<int>()); // Desc. Order
  // sort(a, a + n, less<int>());    // Asc. Order

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  cout << endl << "------------------------" << endl;

  return 0;
}
