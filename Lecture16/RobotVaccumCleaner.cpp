#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int Noise(string &s) {

  // Idea: Iterate over the entire string s and for every character h calculate
  //  How many times s has occured.
  int ans = 0; // It will calculate the Noise.
  int cs = 0;  // It will tell me the count of s till this character h.

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 's') {
      cs++;
    } else {
      ans += cs;
    }
  }

  return ans;
}

// Why Sorting : You want to re arrange the string in  such a way that the noise
// is maximum.
void BubbleSort(string a[], int n) {

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      // I have these two string in Checks : a[j] and a[j+1]
      // What type of comparison I want to perform in these strings.

      string xy = a[j] + a[j + 1];
      string yx = a[j + 1] + a[j];

      if (Noise(xy) < Noise(yx)) {
        swap(a[j], a[j + 1]);
      }
    }
  }
}

int main() {
  int n;
  cin >> n;
  // Array of String Data Type:
  // a[i] : It is a string.
  // a[i][j] : It is the jth character of the string a[i].
  string a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Arrange this array of string on the basis of noise.
  BubbleSort(a, n);

  // Direct List Initialisation:
  string final{""};

  for (int i = 0; i < n; i++) {
    final = final + a[i];
  }

  cout << Noise(final) << endl;

  return 0;
}
