#include <iostream>
using namespace std;

/*
 * Motivation : Given a value n(where n is a variable)
 * check if n is prime or not?
 *
 * Idea: Prime Numbers are those numbers who are divisible
 * by 1 and themself only .
 * what does the above statement mean:
 * There must not be any number in between 2 to n-1 range
 * that divides the number n if it is a prime number.
 *
 * Implementation: Go to every number in between 2 to n-1 and if there is
 * a number that divides the number n then we say n is not a prime number and
 * if for the entire range no such number was found that means this number
 * n is a prime number.
 * Kisi bhi box se bahar jaane ke multiple ways hote hain:
 * 1. Return Statement :
 * 2. End of the box bracket}
 * 3. Jump Statements:
 *
 */

int main() {
  int n;
  cin >> n;

  // Starting Point;
  int c = 2;

  // Ending Point:
  while (c <= n - 1) {

    // Task: Box : mayank
    if ((n % c) == 0) {
      break;
    }

    // next state:
    c += 1;
  }

  /*
   * I need a way to find out that I have ever been to the box mayank
   * or not ? If I have been to the box mayank i don't need to print
   * prime as going inside the box mayank is only possible when n%c==0
   * that means there is a number c that divides the number n.
   */

  /*
   *    After break now my only challenge  is to find out if i have
   * been to the box mayank or not if i have then the number is not
   * prime else it is prime.
   *
   */

  if (c == n) {
    cout << "Prime" << endl;
  } else {
    cout << "Not Prime" << endl;
  }

  return 0;
}
