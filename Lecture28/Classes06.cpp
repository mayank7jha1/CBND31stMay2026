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
 *  Copy Assignment Operator:
 */

class Car {
private:
  int price = 100000;

public:
  string name;
  double modelNo;
  string color;

  char *engine = new char[2]{};

  Car() { cout << "Default Constructor" << endl; }

  Car(string name, int p, string c, char *cptr) {
    cout << "Inside the Parameterised Constructor" << endl;
    SetPrice(p);
    // (*this).name = name;
    this->name = name;
    color = c;
    engine = new char[strlen(cptr) + 1];
    strcpy(engine, cptr);
  }

  Car(string n) {
    cout << "Inside the Parameterised Constructor02" << endl;
    name = n;
  }

  Car(Car &x) {
    cout << "Inside My Own Copy Constructor " << endl;
    SetPrice(x.price);
    name = x.name;
    color = x.color;
    engine = new char[strlen(x.engine) + 1];
    strcpy(engine, x.engine);
  }

  int GetPrice() { return price; }

  void SetPrice(int x) {
    if (x < 70000) {
      price = 70000;
    } else {
      price = x;
    }
  }

  void operator=(Car &x) {
    cout << "Inside My own Copy Assignment Operator" << endl;
    SetPrice(x.price);
    name = x.name;
    color = x.color;
    engine = new char[strlen(x.engine) + 1];
    strcpy(engine, x.engine);
  }

  void Print() {
    cout << "Name   : " << name << endl;
    cout << "Price  : " << price << endl;
    cout << "Color  : " << color << endl;
    cout << "Engine : " << engine << endl;
    cout << endl << "--------------------------" << endl;
  }

  ~Car() {
    cout << "Inside My own Destructor" << name << endl;
    delete[] engine;
  }
};

int main() {

  // Parameterised Constructor:
  Car d("Audi", 90000, "Black", "V8");
  d.Print();

  // Copy Constructor
  Car e(d);

  Car f;

  // You would want to overload this f as a member function.
  f = e; // Copy Assignment.
  f.operator=(e);

  f.Print();

  return 0;
}
