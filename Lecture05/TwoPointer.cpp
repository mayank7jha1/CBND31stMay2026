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

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  cout << endl << "-----------------------------------" << endl;

  // Method 01 :
  for (int i = n - 1; i >= 0; i -= 1) {
    cout << a[i] << " ";
  }
  cout << endl;
  cout << a[3] << endl;
  cout << endl << "-----------------------------------" << endl;

  // Method 02:
  int b[n]{};
  // Idea : Go to every bucket of this array b and fill it with the desired
  // value from a.

  for (int i = 0; i < n; i += 1) {
    b[i] = a[n - i - 1];
  }

  for (int i = 0; i < n; i += 1) {
    cout << b[i] << " ";
  }
  cout << endl << "-----------------------------------" << endl;

  // Method 03: Two Pointer
  int i = 0, j = n - 1;

  while (i < j) {
    swap(a[i], a[j]);
    i += 1;
    j -= 1;
  }

  for (int i = 0; i < n; i += 1) {
    cout << a[i] << " ";
  }
  cout << endl << "-----------------------------------" << endl;

  return 0;
}
