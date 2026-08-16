#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int k;
  cin >> k;
  string s;
  cin >> s;

  bool mp[27]{};

  // Do the obvious stuff while going from outside to inside.
  int i = 0, j = s.length() - 1;
  
  while (i <= j) {
    if (s[i] == '?' and s[j] == '?') {
      i++, j--;
      continue;
    } else if (s[i] == s[j]) {
      mp[s[i] - 'a' + 1] = 1;
      i++, j--;
      continue;
    } else if (s[i] == '?' and s[j] != '?') {
      s[i] = s[j];
      mp[s[i] - 'a' + 1] = 1;
      i++, j--;
    } else if (s[i] != '?' and s[j] == '?') {
      s[j] = s[i];
      mp[s[i] - 'a' + 1] = 1;
      i++, j--;
    } else {
      cout << "IMPOSSIBLE" << endl;
    }
  }

  // GO Outwords and fill the '?'.
  while (i >= 0 and j <= s.length() - 1) {
    // Find the first value of k jo map me fill nahi hain.
    while (k > 1 and mp[k] == 1) {
      k--;
    }

    // Now I am at the character which has not filled.
    if (s[i] == '?' and s[j] == '?') {
      s[i] = s[j] = k - 1 + 'a';
      mp[k] = 1;
      i--;
      j++;
    } else {
      i--;
      j++;
    }
  }

  if (k == 1 and mp[k] == 1) {
    cout << s << endl;
  } else {
    cout << "IMPOSSIBLE" << endl;
  }

  return 0;
}
