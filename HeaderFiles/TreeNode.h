#include <iostream>
using namespace std;

// You creating a new data type of the name TreeNode:
template <typename T> class TreeNode {
public:
  T val;
  TreeNode *left;  // Self Referencing Pointer:
  TreeNode *right; // Self Referencing Pointer:

  // Constructor:
  TreeNode() {
    left = nullptr;
    right = nullptr;
  }

  // Parameterised Constructor:
  TreeNode(T x) {
    val = x;
    left = nullptr;
    right = nullptr;
  }

  // Destructor :
  ~TreeNode() {}
};
