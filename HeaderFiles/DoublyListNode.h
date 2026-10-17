#include <iostream>
template <typename T> class DoublyListNode {
public:
  T val;
  DoublyListNode *next;
  DoublyListNode *prev;
  // Default constructor
  DoublyListNode() {
    next = nullptr;
    prev = nullptr;
  }
  // Parameterized constructor
  DoublyListNode(T x) {
    val = x;
    next = nullptr;
    prev = nullptr;
  }
  ~DoublyListNode() {}
};
