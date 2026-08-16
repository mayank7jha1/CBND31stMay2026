#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  string s;
  getline(cin, s);
  cout << s << endl;

  int freq[256]{};

  for (int i = 0; i < s.length(); i++) {
    char currentChar = s[i];
    int AsciiOfCurrentChar = currentChar;
    // freq[(int)s[i]]++;
    freq[AsciiOfCurrentChar]++;
  }

  for (int i = 0; i < 256; i++) {
    if (freq[i] > 0) {
      cout << (char)i << " " << freq[i] << endl;
    }
  }

  return 0;
}
