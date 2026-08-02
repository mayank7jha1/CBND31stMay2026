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

  // InsertionSort : Idea: Put all the elements at its correct position.
  // Implementation Idea: Maintain two halfs of sorted and unsorted region and
  // move elements from unsorted region to sorted one.
  //
  // Computations : Worst Case :  ~(n*n)

  // Move all the elements i from unsorted to sorted half.
  for (int i = 1; i < n; i++) {
    // Current Element = i;  Is current element ko hume unsorted half se sorted
    // half me daalna hain.

    int key = a[i];

    int j = i - 1; // For comparison and shifting.
    // Kab tak comparison and shifting karni hain piche vale elements ke sath:
    // Jab tak chota element in the sorted half na mil jaaye.

    while (j >= 0 and a[j] > key) {
      // Shifting karte rahiye:
      a[j + 1] = a[j];
      j--;
    }

    // Now j is at the element which is smaller than key.
    // Now you know the correct position of this key.
    a[j + 1] = key;
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}
