#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  // Definition of an Array: 1-Dimentional Array: Collection of Variables of
  // same type. Rules : All the blocks must of the same type. It is mandatory to
  // give sizes in case of a static array. You are not allowed to change the
  // size of an static array.

  int a[5];

  //{} : Jabhi mujhe group/collection of elements ko represent karna hota hai to
  // I use {}.
  // Below are the methods of copy list initialisation.
  int b[6] = {4, 5, 1, 8, 9, 12};
  // This is a derived data type which occupies 6 blocks of int type and jisme
  // last ke do block will be zero.
  int c[6] = {4, 3, 2, 1};

  // This below is an array of size 4 only.
  int d[] = {4, 3, 1, 7};

  // This is an array whose base address is e and size if 6.
  // Direct List Initialisation:
  int e[]{3, 2, 1, 3, 4, 6};

  // Value/Zero Initialisation
  int f[5]{};

  //The first element will be zero and by default the rest will also be zero.
  int g[5]{0};

  cout << e << endl;     // Index 0
  cout << e + 1 << endl; // Index 1
  cout << e + 2 << endl; // Index 2
  cout << e + 3 << endl; // Index 3
  cout << e + 4 << endl; // Index 4
  cout << e + 5 << endl; // Index 5

  // Index : Jumps you take from the base address e in order to reach the
  // current box.
  // Properties of indices/jumps of an array :
  // Indices cannot be negative.
  // Indices are always ordered.

  cout << *e << endl;       // Index 0
  cout << *(e + 1) << endl; // Index 1
  cout << *(e + 2) << endl; // Index 2
  cout << *(e + 3) << endl; // Index 3
  cout << *(e + 4) << endl; // Index 4
  cout << *(e + 5) << endl; // Index 5

  cout << e[0] << endl; // Index 0
  cout << e[1] << endl; // Index 1
  cout << e[2] << endl; // Index 2
  cout << e[3] << endl; // Index 3
  cout << e[4] << endl; // Index 4
  cout << e[5] << endl; // Index 5

  // Traverse karna chahta hu array e par : Main har dabbe par jaana chahta hu
  // of array e.
  // size of this array e is 6.
  // size 6 but jump and index are only 5.
  int i = 0;
  while (i < 6) {
    cout << e[i] << endl;
    // cout << *(a + i) << endl;
    i += 1;
  }

  // e[2] = 90;
  // *(e + 2) = *(e + 2) + 10;
  // e[0],e[1],e[2],e[3],e[4],e[5]

  return 0;
}
