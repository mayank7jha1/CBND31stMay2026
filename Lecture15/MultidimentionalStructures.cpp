#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Array of Arrays:
const int n1 = 5;
const int m2 = 10;

void Solve(int a[][4]) {}

void F(int b[n1][m2]) {}

// void F2(int *c){

// }

int main() {

  int a[5]{3, 2, 3, 1, 3}; // Base Address : 8081
  int b[5]{4, 2, 2, 3, 1}; // Base Address : 7012
  int c[5]{1, 2, 3, 4, 5}; // Base Address : 6015
  int d[5]{4, 3, 1, 4, 7}; // Base Address : 2023

  // Array of Arrays:
  // In array of array each row must have the same number of columns.
  // Fixed Rows and Fixed Columns.
  int e[4][5];
  int e1[4][5]{}; // Zero Initialisation
  int e2[4][5]{{2, 1, 2}, {3, 2, 1, 3}, {3, 2, 1}};
  cout << e2 << endl;
  cout << e2 + 2 << endl;
  cout << *(e2 + 2) << endl;
  cout << e2[2] << endl;
  cout << *((*e2 + 2) + 2) << endl;
  cout << e2[2][2] << endl;

  int n, m;
  cin >> n >> m;

  int g[n][m]{};
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> g[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << g[i][j] << " ";
    }
    cout << endl;
  }

  Solve(g);

  return 0;
}
