#include <bits/stdc++.h>

template <typename T> class ListNode {
public:
  T val;
  ListNode *next;

  // Default Constructor
  ListNode() { next = nullptr; }

  // Parameterised Constructor :
  ListNode(T x) {
    val = x;
    next = nullptr;
  }

  // Destructor
  ~ListNode() {}
};
