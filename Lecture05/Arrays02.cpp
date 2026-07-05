#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  // int a[]{4, 3, 1, 6, 7, 12};
  // // cout << sizeof(a) / sizeof(a[0]) << endl;
  // // This function will return me an integer value.
  // int n = sizeof(a) / sizeof(int);

  // // int i = 0;
  // // while (i < n) {
  // //   cout << a[i] << " ";
  // //   i += 1;
  // // }

  // for (int i = 0; i < n; i += 1) {
  //   cout << a[i] << " ";
  // }

  int n;
  cin >> n;

  int a[n]; // Strictly Preassume kar raha hain ki n is a positive integer.

  for (int i = 0; i < n; i += 1) {
    cin >> a[i];
  }

  int sum = 0;
  for (int i = 0; i < n; i += 1) {
    sum += a[i];
    cout << a[i] << " ";
  }
  cout << endl;

  cout << sum << endl;

  // ForEach  : Data Structure or kisi container par hi laga sakte ho.
  // ForEach loop sirf aur sirf saare element par use kiya jaata hain.
  // ForEach sir and sirf fetch karne ke liye use kiya jaata hain not for
  // updation.

  // for every element of this container/data structure that is going to be
  // represented by x perform this task:

  for (int x : a) {
    x = x + 10;
    cout << x << " ";
  }
  cout << endl << "-------------------------" << endl;
  for (int x : a) {
    cout << x << " ";
  }

  return 0;
}
