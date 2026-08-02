#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
int key;

int UpperBound(int *a, int n) {

  int s = 0, e = n - 1;
  int ans = n;

  while (s <= e) {
    int mid = (s + e) / 2;
    if (a[mid] > key) {
      ans = mid;
      e = mid - 1;
    } else {
      s = mid + 1;
    }
  }

  return ans;
}

int LowerBound(int *a, int n) {

  int s = 0, e = n - 1;
  int ans = n;

  while (s <= e) {
    int mid = (s + e) / 2;
    if (a[mid] >= key) {
      ans = mid;
      e = mid - 1;
    } else {
      s = mid + 1;
    }
  }

  return ans;
}

int BinarySearch(int *a, int n) {
  int s = 0, e = n - 1;
  int ans = n;

  while (s <= e) {
    int mid = (s + e) / 2;
    if (a[mid] == key) {
      ans = mid;
      return ans;
    } else if (a[mid] > key) {
      e = mid - 1;
    } else {
      s = mid + 1;
    }
  }

  return ans;
}

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> key;

  int alpha = BinarySearch(a, n);
  if (alpha < n) {
    cout << "Element is Present " << endl;
  } else {
    cout << "Element is not Present " << endl;
  }

  cout << LowerBound(a, n) << endl;
  cout << UpperBound(a, n) << endl;

  // Frequency of key in log(n) time.
  cout << UpperBound(a, n) - LowerBound(a, n) << endl;

  return 0;
}
