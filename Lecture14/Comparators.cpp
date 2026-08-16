#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Comparators : Tell you how every element is being compared in the following
// container.
bool compare(int x, int y) {
  if (x < y) {
    return 0;
  } else {
    return 1;
  }
}

void BubbleSort(int a[], int n) {

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (compare(a[j], a[j + 1]) == 0) {
        swap(a[j], a[j + 1]);
      }
    }
  }

  cout << endl << "------------------------" << endl;
}

int main() {
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  BubbleSort(a, n);

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  cout << endl << "------------------------" << endl;

  return 0;
}
