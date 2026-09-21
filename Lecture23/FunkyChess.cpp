#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int n;
int grid[11][11];
int TotalBoxes = 0;
int dx[]{1, 1, 2, 2, -1, -1, -2, -2};
int dy[]{2, -2, 1, -1, 2, -2, 1, -1};

void Input() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> grid[i][j];
      if (grid[i][j] == 1) {
        TotalBoxes++;
      }
    }
  }
}

// F(x,y) : Max. Number of Boxes where the knight can travel in a single path.

int F(int x, int y) {
  // There is no stopping point here.

  // Current State : F(x,y):
  grid[x][y] = 0; // Mark this box as visited.
  int maxi = 0; // Current State se maximum number of boxes where I can travel.

  for (int i = 0; i < 8; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if (nx >= 0 and nx < n and ny >= 0 and ny < n and grid[nx][ny] == 1) {
      int SmallAns = F(nx, ny);

      maxi = max(SmallAns, maxi);
    }
  }

  // When I am here: I have explored all the 8 paths:
  // Current State : F(x,y) :

  // Now I should allow to visit this box x,y from a different path:
  grid[x][y] = 1; // Backtracking:

  return 1 + maxi;
}

int main() {
  Input();

  if (grid[0][0] == 0) {
    cout << "No Solution Exists" << endl;
    return 0;
  }

  // Starting Point:
  int ans = F(0, 0);

  cout << TotalBoxes - ans << endl;

  return 0;
}
