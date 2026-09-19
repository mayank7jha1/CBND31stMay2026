#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
int n, m;
char grid[1001][1001];
bool visited[1001][1001]{};
bool solution[1001][1001]{};

bool F(int x, int y) {

  // Stopping Point:
  if (x == n and y == m) {
    // If You are here that means you now have a path to reach n,m from 1,1 and
    // that path is stored inside the solution matrix.
    // Print the Solution Matrix:

    solution[x][y] = 1;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        cout << solution[i][j] << " ";
      }
      cout << endl;
    }
    cout << endl;
    return false;
  }

  // Current State : F(x,y):
  visited[x][y] = 1;
  solution[x][y] = 1; // Assuming this box will now be part of my solution.

  if (y + 1 <= m and visited[x][y + 1] == 0) {
    // Main right me jaasakta hu:
    bool Rightans = F(x, y + 1);

    if (Rightans == true) {
      return true; // Saying I have found a path from x,y also.
    }
  }

  // Now If You are here: What does this mean: From x,y Rightans was not true.

  if (x + 1 <= n and visited[x + 1][y] == 0) {
    // Main x,y se down jaasakta hu:
    bool Downans = F(x + 1, y);
    if (Downans == true) {
      // Current State F(x,y) bhi true hogya and mujhe rasta mil gya:
      return true;
    }
  }

  // Current State : F(x,y) : If you are here that means Rightans was false and
  // Downans was also false hence from this box x,y there is no way to reach
  // n,m.

  // My Preassumption of this box as part of solution was wrong and hence remove
  //  this box from solution.

  // Backtracking:
  solution[x][y] = 0;
  visited[x][y] = 0;

  return false; // I have no way to reach n,m from this x,y box.
}

int main() {
  cin >> n >> m;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> grid[i][j];
      if (grid[i][j] == 'X') {
        visited[i][j] = 1;
      }
    }
  }

  // Starting Point: Recursion from Front:
  bool useless = F(1, 1);
}
