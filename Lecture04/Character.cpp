#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  // int a;
  // int b = 10;
  // int c = {45};
  // int d{90};

  // char ch;
  // char ch1 = 65; // Ascii value ki mapping dekhega.
  // cout << ch1 << endl;
  // char ch2 = 'A';
  // cout << ch2 << endl;

  // // You can only store a single character in a character bucket.
  // char ch3 = 48;
  // cout << ch3 << endl;

  // int n;
  // cin >> n;

  // int i = 1;
  // while (i <= n) {
  //   char ch;
  //   cin >> ch;
  //   cout << ch << " ";
  //   i += 1;
  // }

  // int x;
  // int sum = 0;
  // while (cin >> x) {
  //   sum += x;
  // }

  // cout << sum << endl;

  // int n;
  // cin >> n;
  // int sum = 0;
  // int i = 1;
  // while (i <= n) {

  //   int x;
  //   cin >> x;
  //   sum += x;
  //   i += 1;
  // }

  // cout << sum << endl;

  // char x;
  // int sum = 0; // Type Casting:

  // while (cin >> x) {
  //   cout << (int)x << endl; // Implicit TypeCasting:
  //   sum += x;
  // }

  // cout << sum << endl;

  // cin : Cannot read White Spaces : next line : /n and space

  // char ch;
  // while (cin >> ch) {
  //   cout << ch;
  // }

  // char ch;
  // // This below line can now read white spaces also.
  // cin.get(ch); // : cin>>ch

  char ch;
  while (cin.get(ch)) {
    cout << ch;
  }

  // Direct List Initialisation:
  // char ch{'Z'};
  // cout << ch << endl;

  // Capital Z ki ascii value kya hain 90.
  // ch as a variable ke pass small z ki ascii value honi chahiye.
  // small z ki ascii value kya hoti hain : 122

  // ch = ch + 32;
  // cout << ch << endl;

  return 0;
}
