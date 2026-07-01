#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Function:
int sum(int, int);

int main() {

  int x, y;
  cin >> x >> y;
  cout << sum(x, y) << endl; // Function Call:

  return 0;
}

// Function Defintion:
template <typename T> T sum(T x, T y) { return x + y; }
