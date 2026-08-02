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
  int key;
  cin >> key;

  // Print the index where the key is present if not present print
  //  Not found.

  // Define your search space:
  int s = 0, e = n - 1;

  // Create an element that will store the potential answer to the question.
  int ans = n;

  // Till the time you are in your search space perform the following task:
  // 1. Find the middle element.
  // 2. Compare the middle element with the target in some way and based on  the
  // comparison with the target reduce your search space.

  while (s <= e) {
    int mid = (s + e) / 2;

    if (a[mid] == key) {
      ans = mid;
      break;
    } else if (a[mid] > key) {
      e = mid - 1;
    } else {
      // a[mid]<key
      s = mid + 1;
    }
  }

  if (ans == n) {
    cout << "Element not found" << endl;
  } else {
    cout << ans << endl;
  }

  return 0;
}
