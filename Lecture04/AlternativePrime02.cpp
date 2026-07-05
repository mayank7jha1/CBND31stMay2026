#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Aapko 2 se n tak ke alternative Prime numbers print karvane hain.
// 2,5,11,17 _ _ _ _ _ _

int main() {

  int n;
  cin >> n;
  int count = 0;

  int x = 2;
  while (x <= n) {

    int c = 2;
    int flag = 0;
    while (c <= x - 1) {
      if ((x % c) == 0) {
        flag = 1;
        break;
      }
      c += 1;
    }

    if (flag == 0) {
      // Number is Prime:
      count += 1;
      
      if ((count % 2) == 0) {
        cout << x << " ";
      }
    }

    x += 1;
  }

  return 0;
}
