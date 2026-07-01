#include <iostream>
using namespace std;

/*
 * while
 * for loop
 * for (foreach)
 * do while
 *
 *  1. Starting Point
 *  2. Ending Point
 *  3. Task
 *  4. Next State par kaise jaate hain
 */

int main() {
  int n;
  cin >> n;

  int c = 1; // Starting Point

  // Ending Point:
  while (c <= n) {

    // Task:
    cout << c << " ";

    // Next State:
    c += 1; // c=c+1
  }

  // cout << c << endl;

  return 0;
}
