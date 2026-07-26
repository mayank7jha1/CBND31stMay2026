#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 1e5 + 3; // 1*10^5+3;

int main() {
  int n, k;
  cin >> n >> k;

  char ch[N];
  cin >> ch;

  // Op1 : Undesired Character : b : Change  : b->a.
  char undesired = 'b';

  int sp = 0, ep = 0;
  // The amount of undesired character occurring in the current window.
  int count = 0;
  int ans = 0; // Maximum length of the substring having same characters after k
               // changes.

  // Expansion :
  for (; ep < n; ep++) {
    // Assumption : Kya main current character ko window ka part bana du:
    if (ch[ep] == undesired) {
      count++;
    }

    // Shrinkn: If you are at an undesired window.
    while (sp <= ep and count > k) {
      if (ch[sp] == undesired) {
        count--;
      }
      sp++;
    }

    // Update:
    ans = max(ans, ep - sp + 1);
  }

  undesired = 'a';

  sp = 0, ep = 0;
  // The amount of undesired character occurring in the current window.
  count = 0;
  int ans01 = 0; // Maximum length of the substring having same characters after
                 // k changes.

  // Expansion :
  for (; ep < n; ep++) {
    // Assumption : Kya main current character ko window ka part bana du:
    if (ch[ep] == undesired) {
      count++;
    }

    // Shrinkn: If you are at an undesired window.
    while (sp <= ep and count > k) {
      if (ch[sp] == undesired) {
        count--;
      }
      sp++;
    }

    // Update:
    ans01 = max(ans01, ep - sp + 1);
  }

  cout << max(ans, ans01) << endl;

  return 0;
}
