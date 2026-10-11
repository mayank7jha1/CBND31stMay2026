#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Properties of Using a class:

// 1. Abstraction:
// 2. Polymorphyism:
// 3. Inheritance:
// 4. Encapsulation:

// Definition: This is not part of Program Memory.
// Blueprint :
class Car {
  // Access Modifiers:
  // public: This is data member and member function will be visible outside the
  // class also.
  // private: THis data member is not visible outside the class. To Access these
  // indirectly you use getters and setters.

  //  protected: These data members can be accessed out the class in only
  //  derived child class through inheritence.

  // Data Members :
  // BY default all the data members are private.
public:
  string name;
  int price;

  // Member Functions:
};

// class Person: public Car{
//     
// }

int main() {

  int x; // This is a variable of type int.

  // Object: Region of Space
  // Named Object : Variables.
  Car c; // This is a variable of type Car.
  // All the properties of Car will be available here.
  // If You want to access a property of a Car you can do so
  // by the help of dot(.) Operator.

  c.name = "BMW";
  c.price = 10000;
  cout << c.name << " " << c.price << endl;

  return 0;
}
