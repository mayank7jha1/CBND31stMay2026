#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

void sum(int &a, int &b) {
  a = 100;
  b = 900;
}

int main() {

  int x, y;
  cin >> x >> y;

  sum(x, y);

  cout << x << " " << y << endl;

  return 0;
}

// Function Defintion:
