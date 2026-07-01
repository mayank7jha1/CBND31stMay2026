#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int r = 1; // Starting Point:
  // Ending POint:
  while (r <= n) {

    // Current Row : What was my task for the current row: Task:
    // Starting Point:
    int c = 1;
    // Ending Point:
    while (c <= r) {
      // Subtask:
      cout << "*";

      // Next State :
      c += 1;
    }

    // Main current row r ke liye print kar chuka hu:
    cout << endl;

    // Next State:
    r += 1;
  }

  return 0;
}




