#include <climits>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool CanPlace(int row, int col, int n, vector<string> &current) {

  // Check the current Row:
  for (int y = 0; y < col; y++) {
    if (current[row][y] == 'Q') {
      return false;
    }
  }

  // Check the current Col :
  for (int x = 0; x < row; x++) {
    if (current[x][col] == 'Q') {
      return false;
    }
  }

  // Check the Left Diagonal:
  int r = row, c = col;
  while (r >= 0 and c >= 0) {
    if (current[r][c] == 'Q') {
      return false;
    }
    r--, c--;
  }

  // Check the Right Diagonal:
  r = row, c = col;
  while (r >= 0 and c < n) {
    if (current[r][c] == 'Q') {
      return false;
    }
    r--, c++;
  }

  return true;
}

bool F(int row, vector<string> &current, vector<vector<string>> &ans, int n) {
  // Stopping Point:
  if (row == n) {

    // Now I have found one way to put n queens in the matrix and that way
    // is stored in vector<string>current me.

    ans.push_back(current);
    return false;
  }

  // Current State: F(row):
  for (int col = 0; col < n; col++) {
    if (CanPlace(row, col, n, current) == 1) {
      current[row][col] = 'Q';
      int SmallAns = F(row + 1, current, ans, n);
      if (SmallAns == true) {
        return true;
      }

      // Backtracking
      current[row][col] = '.';
    }
  }

  // If I am here: Current State : F(row):
  return false;
}

vector<vector<string>> solveNQueens(int n) {

  // All the Solutions will be stored in this ans.
  vector<vector<string>> ans;

  // Ek Single 2-d Solution hum log Current me store karenge.
  vector<string> current(n, "");

  // This is a string of size n having n dots.
  string s(n, '.');
  for (int i = 0; i < n; i++) {
    current[i] = s;
  }

  bool useless = F(0, current, ans, n);

  return ans;
}

int main() {
  int n;
  cin >> n;
  vector<vector<string>> ans = solveNQueens(n);

  if (ans.size() == 0) {
    cout << "No Solution Exists" << endl;
  }

  cout << ans.size() << endl;
  cout << endl << "-----------------------------------" << endl;

  // Printing Using For Loop:
  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j] << endl;
    }
    cout << endl;
  }
  cout << endl << "---------------------------" << endl;

  // Printing Using For Each Loop:
  for (vector<string> x : ans) {
    for (string y : x) {
      cout << y << endl;
    }
    cout << endl;
  }
}
