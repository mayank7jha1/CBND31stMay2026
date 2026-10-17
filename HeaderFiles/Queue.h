#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

// We are building our own circular queue :
template <typename T> class Queue {
public:
  T *a; // Dynamic Array

  int cs;    // Is index par array ke aapko new element daalna hain.
  int ts;    // Total Size of the Queue.
  int front; // It is pointing to the index where the front element is jiska
             // access user ke pass hoga.
  int back;  // Since we are making a circular queue we need this for various
             // purposes.

  // Default Construtor :
  Queue() {
    a = new T[MAX];
    cs = 0;
    ts = MAX;
    front = back = -1; // We have not yet added any element to this queue.
  }

  // Parameterised Constructor :
  Queue(int size) {
    a = new T[size];
    cs = 0;
    front = back = -1;
    ts = size;
  }

  // Member Functions :
  void push(T x) {
    // a[cs] = x;
    // cs++;
    // front = back = 0;
    if (cs == ts) {
      cout << "Queue Overflow" << endl;
      return;
    }

    // For the very first element front and back both are at zero index.
    if (cs == 0) {
      front = 0;
    }

    back++; // Now for the very first element back will be at zero and process
            // will go on for rest of the element.
    // Since this is a circular don't forget to take the mode with the size.

    back %= ts; // This is a circular queue.
    a[back] = x;
    cs++;
  }

  void pop() {
    if (cs == 0) {
      cout << "Queue is Empty" << endl;
      return;
    }

    if (cs == 1) {
      back = front = -1;
    }

    front++; // Removal of access of the user with the current element.
    // Since it is a circular you will have to take a mod with total size.
    front %= ts;

    cs--; // Ek element queue se kam hogya.
  }

  T front1() { return a[front]; }
  

  bool empty() {
    if (cs == 0) {
      return true;
    } else {
      return false;
    }
  }
};
