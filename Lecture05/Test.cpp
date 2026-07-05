#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int a[1001]; // Assumption 01 : Elements given to you will not exceed this
               // size.
               // Assumption 02 : You will not be provided with any other input,
               // other than the elements of the array.
  int x;
  int p = 0;
  while (cin >> x) {
    a[p] = x;
    p += 1;
  }
  cout << p << endl;

  // What will the size of the above array : 1001
  //  Total Size  : 1001, No. of elements present in the above array?

  for (int i = 0; i < p; i += 1) {
    cout << a[i] << " ";
  }

  return 0;
}
