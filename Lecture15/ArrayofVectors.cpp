#include <climits>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

void F(vector<int> p[10]) {}

// vector of array:

int main() {

  // Array of vector
  vector<int> p{3, 2, 1, 2, 1};

  // Fixed Rows and Variable Columns.
  vector<int> a[10]{
      {3, 2, 1, 3},
      {3, 2, 1, 3, 4, 2, 2, 1, 3, 4},
      {2, 1, 2, 3, 4, 5},
  };

  int e[3][4];
  

  // What is a[i] : It is a vector.
  // Now each row can have variable number of columns.

  int n, m;
  cin >> n >> m;
  vector<int> g[n];

  for (int i = 0; i < n; i++) {
    vector<int> ans;
    for (int j = 0; j < m; j++) {
      int x;
      cin >> x;
      ans.push_back(x);
    }
    a[i] = ans;
    ans.clear();
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int x;
      cin >> x;
      a[i].push_back(x);
    }
  }

  F(g);

  return 0;
}
