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

  int pre[n]{};  // This is prefix sum.
  int pre1[n]{}; // This is prefix multiply.

  pre[0] = a[0];
  for (int i = 1; i < n; i++) {
    pre[i] = pre[i - 1] + a[i];
  }

  for (int i = 0; i < n; i++) {
    cout << pre[i] << " ";
  }

  cout << endl << "------------------------------------" << endl;

  pre1[0] = a[0];
  for (int i = 1; i < n; i++) {
    pre1[i] = pre1[i - 1] * a[i];
  }

  for (int i = 0; i < n; i++) {
    cout << pre1[i] << " ";
  }

  cout << endl << "------------------------------------" << endl;

  // Fetch Query:
  //  Sum[2,4] : 
  cout << pre[4] - pre[1] << endl;
  // Multiply[2,4] :
  cout << pre1[4] / pre1[1] << endl;

  cout << endl << "------------------------------------" << endl;

  // Suffix Sum :
  int suffix[n]{};
  suffix[n - 1] = a[n - 1];
  for (int i = n - 2; i >= 0; i--) {
    suffix[i] = suffix[i + 1] + a[i];
  }

  for (int i = 0; i < n; i++) {
    cout << suffix[i] << " ";
  }

  cout << endl << "------------------------------------" << endl;

  // Suffix Multiply :
  int suffix1[n]{};
  suffix1[n - 1] = a[n - 1];
  for (int i = n - 2; i >= 0; i--) {
    suffix1[i] = suffix1[i + 1] * a[i];
  }

  for (int i = 0; i < n; i++) {
    cout << suffix1[i] << " ";
  }

  cout << endl << "------------------------------------" << endl;

  return 0;
}
