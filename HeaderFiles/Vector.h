#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

template <typename T> class Vector {
public:
  // Data Members :
  T *a;
  int ts; // Current Dynamic Array ka total size kitna hain.
  int cs;

  // Default Constructor;
  Vector() {
    ts = 1;
    cs = 0;
    a = new T[ts];
  }

  // Parameterised COnstructor:
  Vector(int size) {
    ts = size;
    cs = 0;
    a = new T[ts];
  }

  // Member Functions :
  void push_back(T x) {

    // What if the size of the vector/ mera internal dynamic array is full?
    // You double its size:
    // Aapko ek new dynamic array banana padega and usko new dynamic array
    // me saara ka saara purana content copy karna padega.
    if (ts == cs) {
      T *b = a; // Now my both pointer a and b are pointing to the same array.
      a = new T[ts * 2];

      // Copy the content from b to a.
      for (int i = 0; i < ts; i++) {
        a[i] = b[i];
      }

      delete[] b;
      // Increase your total size:
      ts = ts * 2;
    }

    a[cs] = x;
    cs++;
    return;
  }

  int size() { return cs; }
  int capacity() { return ts; }

  T front() { return a[0]; }
  T back() { return a[cs - 1]; }

  // Last ka element remove kardeta hu:
  // How do we do this is dynamic array?
  // Instead of delete we remove the access of the user from this box.
  // User ke liye vector me elements are from 0 to cs , matlab user can access
  // elements from 0 to cs since mai delete nahi karsakta use ka access last
  // element se remove kar dunga.
  void pop_back() {
    cs--;
    return;
  }

  bool empty() {
    if (cs == 0) {
      return true;
    } else {
      return false;
    }
  }

  T operator[](int index) { return a[index]; }
};
