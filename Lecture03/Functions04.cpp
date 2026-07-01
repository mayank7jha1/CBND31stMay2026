#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

void sum(int *xptr, int *yptr) {
  // Check:
  *xptr = 1000000;
}

int main() {

  int x, y;
  cin >> x >> y;

  sum(&x, &y); // Function Call:
  
  cout << x << endl;
  return 0;
}

// Function Defintion:
