#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// COmputations : 1000*30*30*30 : 27*10^6
int main() {
  int t;
  cin >> t;

  for (int i = 1; i <= t; i++) {
    int n;
    cin >> n;
    int freq[10]{};

    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      x %= 10;
      freq[x]++;
    }

    // Now I know ki konsa digit kitni bar aaraha hain.
    // Now Re-Create this 3rd array.
    int a[30]{};
    int k = 0;

    for (int i = 0; i < 10; i++) {
      // Current Digit : i:
      // Add this digit i, freq[i] times in the b array.

      if (freq[i] > 3) {
        // To avoid the extra frequencies.
        freq[i] = 3;
      }

      int count = 1;
      while (count <= freq[i]) {
        a[k] = i;
        k++;
        count++;
      }
    }

    // for (auto x : a) {
    //   cout << x << " ";
    // }
    // cout << endl;

    // What is the size of a? k:
    int flag = 0;
    // Computations : n*n*n : n^3:
    for (int i = 0; i < k - 2; i++) {
      for (int j = i + 1; j < k - 1; j++) {
        for (int z = j + 1; z < k; z++) {
          if ((a[i] + a[j] + a[z]) % 10 == 3) {
            flag = 1;
            break;
          }
        }

        if (flag == 1) {
          break;
        }
      }
      if (flag == 1) {
        break;
      }
    }

    if (flag == 1) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}
