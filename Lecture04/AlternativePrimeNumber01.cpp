#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Aapko 2 se n tak ke alternative Prime numbers print karvane hain.
// 2,5,11,17 _ _ _ _ _ _

int main() {

  int n;
  cin >> n;
  int count = 0; // Ab tak kitne prime numbers mil gye hain.
  // Idea: GO to every number from 2 to n and do the process.
  int x = 2;
  while (x <= n) {

    // Current Number : x :
    //  Subtask for this current number :
    // Check if this current number x is prime or not:
    // Checking Idea : There cannot be any number between 2 to current number -1
    // that can divide the current number is this current number is a prime
    // number.
    // x : is prime when there is no number between [2,x-1] that divides x.

    int c = 2;
    int flag = 0;
    while (c <= x - 1) {
      if ((x % c) == 0) {
        flag = 1;
        break;
      }
      c += 1;
    }

    // After Break you will standing here:
    //  How do i decide Ki i have moved out of the above box by break or by
    // //  condition failure?
    // if (x == c) {
    //   // Number is Prime :
    // } else {
    //   // Number is not prime:
    // }

    if (flag == 0) {
      // Number is Prime:
      count += 1;
    }

    if (count % 2 == 0) {
      cout << x << " ";
    }

    x += 1;
  }

  return 0;
}
