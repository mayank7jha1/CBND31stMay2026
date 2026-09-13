#include <iostream>
using namespace std;
char in[100];

// F(x) : All the permutations from xth index till n-1 th index.

string s;

void F(int x) {
  // Current State : F(x)
  // Stopping Point:
  if (in[x] == '\0') {
    // F(n): Vala State:
    cout << in << endl;
    return;
  }

  // Current State: F(x):

  for (int y = x; in[y] != '\0'; y++) {
    swap(in[x], in[y]);

    // Next State:
    F(x + 1);

    // Current State:F(x) : I now have complete the State F(x+1) and I am again
    // at State F(x).

    // Now I will be returning to the previous state from this F(x).
    // JO kaam tumne F(x) se F(x+1) tak jaane me kiya tha uska opposite work
    // kardo.

    // Backtracking:
    swap(in[x], in[y]);
  }

  return;
}

void F1(int x) {
  // Current State : F1(x)
  // Stopping Point:

  if (x == s.length()) {
    // F(n): Vala State:
    cout << s << endl;
    return;
  }

  // Current State: F(x):

  for (int y = x; y < s.length(); y++) {
    swap(s[x], s[y]);

    // Next State:
    F1(x + 1);
    swap(s[x], s[y]);
  }

  return;
}

void F2(string s, int x) {
  // Current State : F1(x)
  // Stopping Point:

  if (x == s.length()) {
    // F(n): Vala State:
    cout << s << endl;
    return;
  }

  // Current State: F(x):

  for (int y = x; y < s.length(); y++) {
    swap(s[x], s[y]);

    // Next State:
    F2(s, x + 1);
  }

  return;
}

void F3(string &s, int x) {
  // Current State : F1(x)
  // Stopping Point:

  if (x == s.length()) {
    // F(n): Vala State:
    cout << s << endl;
    return;
  }

  // Current State: F(x):

  for (int y = x; y < s.length(); y++) {
    swap(s[x], s[y]);

    // Next State:
    F3(s, x + 1);

    swap(s[x], s[y]);
  }

  return;
}

int main() {
  cin >> in;
  cin >> s;

  // Recursion From Start:
  //  Starting Point:
  F(0);
  cout << endl << "------------------------------------" << endl;

  // Recursion From Start:
  //  Starting Point:
  F1(0);

  cout << endl << "------------------------------------" << endl;

  string s1;
  cin >> s1;

  // Recursion From Start:
  //  Starting Point:
  F2(s1, 0);

  cout << endl << "------------------------------------" << endl;

  string s2;
  cin >> s2;

  // Recursion From Start:
  //  Starting Point:
  F3(s2, 0);

  return 0;
}
