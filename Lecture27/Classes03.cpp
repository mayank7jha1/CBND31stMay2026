#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

/*
 *  4 Things are there in classes that self invoked.
 *  1. Constructor
 *  2. Copy Constructor
 *  3. Copy Assignment : this
 *  4. Destructor
 *
 *
 *  2. Copy Constructor:
 */

class Car {
private:
  int price = 100000;

public:
  string name;
  double modelNo;
  string color;

  // Dynamic Array:
  // Collection of Characters:
  char *engine = new char[2]{};

  // THis is provided to you from C++: default Constructor
  // Constructor Overloading.

  Car() {
    // This the definition of default constructor:
    cout << "Default Constructor" << endl;
  }

  // Parameterised Constructor:
  // Constructor Overloading:
  Car(string n, int p, string c, char *cptr) {
    cout << "Inside the Parameterised Constructor" << endl;
    // if (price >= 70000) {
    //   price = p;
    // } else {
    //   price = 70000;
    // }

    SetPrice(p);
    name = n;
    color = c;
    engine = new char[strlen(cptr) + 1];
    strcpy(engine, cptr);
  }

  Car(string n) {
    cout << "Inside the Parameterised Constructor02" << endl;
    name = n;
  }

  // Copy Constructor:
  Car(Car &x) {
    cout << "Inside My Own Copy Constructor " << endl;
    SetPrice(x.price);
    name = x.name;
    color = x.color;
    // Shallow Copy:
    // engine = x.engine;

    engine = new char[strlen(x.engine) + 1];
    strcpy(engine, x.engine);
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
    cout << "Name   : " << name << endl;
    cout << "Price  : " << price << endl;
    cout << "Color  : " << color << endl;
    cout << "Engine : " << engine << endl;
    cout << endl << "--------------------------" << endl;
  }

  // Destructor:
  ~Car() {
    cout << "Inside My own Destructor" << name << endl;
    delete[] engine;
  }
};

int main() {

  int x;
  Car c; // Default Constructor.

  c.name = "BMW";
  c.SetPrice(40000);

  // Parameterised Constructor:
  Car d("Audi", 90000, "Black", "V8");
  d.Print();

  // Copy Constructor:
  // Shallow Copy :
  Car e(d);
  e.Print();

  d.engine[0] = 'Z';
  d.name[0] = 'T';

  d.Print();
  e.Print();

  Car *z = new Car("Audi", 90000, "Black", "V8");
  // z : Address:
  (*z).name = "Alto";
  z->name = "Alto";

  delete z;

  return 0;
}
