#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define endl '\n'

int main() {

  // 1. While Loop
  // Starting Point :
  int i = 1;
  // Ending Point:
  while (i <= 10) {
    int x{90};
    // Task:
    cout << i << " ";
    // Next State:
    i += 1;
  }

  // cout << x << endl; // We are not able to print x as it is not defined in
  // the current box.
  // cout << i << endl; // Why are you able to print this i?Because you had not
  //                    // defined this i in the scope of the above while loop.
  cout << endl << "---------------------" << endl;

  // 2. For Loop :
  // for (int x = 1; x <= 10; x += 1) {
  //   cout << x << " ";
  // }

  // cout << endl << "---------------------" << endl;

  // cout << x << endl; // NO you cannot print x here as x is defined inside the
  //  for loop and is not present in the current box.

  // int x = 20;
  // for (x = 1; x <= 10; x += 1) {
  //   cout << x << " ";
  // }
  // cout << x << endl;
  // cout << endl << "---------------------" << endl;

  // int x = 1;
  // for (; x <= 10; x += 1) {
  //   cout << x << " ";
  // }
  // cout << x << endl;
  // cout << endl << "---------------------" << endl;

  // int x = 1;
  // for (; x <= 10;) {
  //   cout << x << " ";
  //   x += 1;
  // }

  // cout << x << endl;
  // cout << endl << "---------------------" << endl;

  // for (int z = 10, x = 45;(x>=10 and z<=67);x+=30,z+=60){

  // }

  // for (int z = 10, x = 45; (x >= 10 and z <= 67); x = z + 5) {

  // }

  return 0;
}
