#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

// Building my own stack using a vector :
template <typename T> class Stack {
public:
  // By default user will think this stack is of 1000 size.
  T a[MAX];
  int TopoftheStack; // Ye vo index ko point karega in array a jo mere usere ke
                     // stack representation ka top hai .

  // Default Constructor
  Stack() { TopoftheStack = -1; }

  // Member Functions :
  void push(T x) {
    TopoftheStack++;
    if (TopoftheStack == MAX) {
      cout << "Stack Overflow" << endl;
      return;
    }
    a[TopoftheStack] = x;
  }

  bool empty() {
    if (TopoftheStack == -1) {
      return true;
    } else {
      return false;
    }
  }

  T top() {
    if (TopoftheStack == -1) {
      return -1;
    }
    return a[TopoftheStack];
  }

  void pop() {
    if (TopoftheStack == -1) {
      cout << "Underflow" << endl;
      return;
    }
    TopoftheStack--; // User ka access remove kardiya hain.
  }
};
