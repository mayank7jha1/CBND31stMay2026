#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Operator Overloading :
// 1. Member Function     : Class ke ander
// 2. Non Member Function :

class CoOrdinates {
private:
  int x, y, z;

public:
  CoOrdinates() {}

  // Parameterised Constructor:
  CoOrdinates(int x, int y, int z) {
    this->x = x;
    this->y = y;
    this->z = z;
  }

  // Friend Function : All the data members that are private can be accessed
  // inside the current class as well as the friend function/class.

  friend CoOrdinates operator+(int x1, CoOrdinates l);

  // Operator Overloading as a Member Function:
  CoOrdinates operator+(CoOrdinates p) {
    CoOrdinates d;
    d.x = x + p.x;
    d.y = y + p.y;
    d.z = z + p.z;
    return d;
  }
};

// Operator Overloading as a Non Member Function :

CoOrdinates operator+(int x1, CoOrdinates l) {
  CoOrdinates d;
  d.x = x1 + l.x;
  d.y = p.y;
  d.z = p.z;
  return d;
}

int main() {

  CoOrdinates m(10, 7, 1);
  CoOrdinates n(3, 4, 9);
  CoOrdinates z = m + n;

  CoOrdinates l = 90 + n;

  int e, g;
  cout << e;
  cout.operator<<(e).operator<<(g);

  return 0;
}
