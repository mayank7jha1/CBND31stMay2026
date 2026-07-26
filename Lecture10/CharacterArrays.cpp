#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  // Integer Arrays : Collection of Integers.
  // Character Arrays : Collection of Characters : Strings.

  // int n;
  // cin >> n;

  // char ch[n];

  // for (int i = 0; i < n; i++) {
  //   cin >> ch[i];
  // }

  // // ch[i] : 1 character at a time.

  // for (int i = 0; i < n; i++) {
  //   cout << ch[i] << " ";
  // }
  //
  // char x;
  // char ch1[100];
  // int k = 0;

  // while (cin >> x) {
  //   ch1[k] = x;
  //   k++;
  // }

  // // Size of this character array : k elements are there.
  // for (int i = 0; i < k; i++) {
  //   cout << ch1[i];
  // }

  //<< / >> Operators are  : Overloded.

  // char ch2[100];
  // cin >> ch2; // Till the time you encounter a white space tab tak input
  // lelo.

  // // This is an entire array.
  // cout << ch2; // Till the time you encounter () print karva do.

  // // This is a single character.
  // cout << ch2[3] << " ";

  // char ch3[]{'M', 'a', 'y', 'a', 'n', 'k', '\0'};
  // cout << ch3 << endl;

  // cout << (int *)ch3 << endl;

  // char ch4[]{"Mayank"};
  // cout << ch4 << endl;

  // char ch5[100];
  // cin >> ch5;

  // int len = 0;
  // for (int i = 0; ch5[i] != '\0'; i++) {
  //   cout << ch5[i] << " ";
  //   len++;
  // }

  // cout << endl;

  char ch[1000];
  // cin.getline(ch, 50); // By default the deliminator is next line.
  cin.getline(ch, 1000, EOF);
  cout << ch << endl;

  return 0;
}
