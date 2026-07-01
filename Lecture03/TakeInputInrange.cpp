#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  int c = 1; // Starting Point:
  int sum = 0;

  // Stopping Point:
  while (c <= n) {

    // Task:
    int x;
    cin >> x;
    sum += x;

    // Next State:
    c += 1;
  }
  cout << sum << endl;

  return 0;
}
