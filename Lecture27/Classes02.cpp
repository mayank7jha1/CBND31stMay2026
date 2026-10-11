#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

/*
 *  4 Things are there in classes that self invoked.
 *  1. Constructor
 *  2. Copy Constructor
 *  3. Copy Assignment
 *  4. Destructor
 *
 *
 *  1. Constructor:
 */

class Car {
private:
  int price = 100000;

public:
  string name;
  double modelNo;
  string color;

  // THis is provided to you from C++: default Constructor
  // Constructor Overloading.

  Car() {
    // This the definition of default constructor:
    cout << "Default Constructor" << endl;
  }

  // Parameterised Constructor:
  // Constructor Overloading:
  Car(string n, int p, string c) {
    cout << "Inside the Parameterised Constructor" << endl;
    if (price >= 50) {
      price = p;
      name = n;
      color = c;
    }

    price = p;
    name = n;
    color = c;
  }

  Car(string n) {
    cout << "Inside the Parameterised Constructor02" << endl;
    name = n;
  }

  // Getter:
  int GetPrice() { return price; }

  // Setter:
  void SetPrice(int x) {
    if (x < 70000) {
      price = 70000;
    } else {
      price = x;
    }
  }

  // Member Functions :
  void Print() {
    cout << "Name  : " << name << endl;
    cout << "Price : " << price << endl;
    cout << "Color : " << color << endl;

    cout << endl << "--------------------------" << endl;
  }
};

int main() {

  int x;
  Car c; // Default Constructor.

  c.name = "BMW";
  c.SetPrice(40000);

  // Parameterised Constructor:
  Car d("Audi", 90000, "Black");
  d.Print();

  return 0;
}
