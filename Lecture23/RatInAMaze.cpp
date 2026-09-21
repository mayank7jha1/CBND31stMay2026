#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int n;
char maze[1001][1001];

// Current path me kya aapne i,j ko visit kiya ki nahi
//  ye mujhe visited vala matrix batata hain.
bool visited[1001][1001]{};

int dx[]{1, -1, 0, 0};
int dy[]{0, 0, 1, -1};
int directionLabel[]{'D', 'U', 'R', 'L'};

// If I am at x,y box : I can move to :
// x,y ------ > x+1,y+0 ----> Down Direction.
// x,y ------ > x-1,y+0 ----> Up Direction.
// x,y ------ > x,y+1   ----> Right Direction.
// x,y ------ > x,y-1   ----> Left Direction.

// This vector will store all the paths.
// AllPaths[i] :  One of the Way : DDDDRRDLDRRD
// This below is a vector whose each element will be
// a string.
// AllPaths.push_back : Ek string ko.
vector<string> AllPaths;
string CurrentPath; // Abhi aapne konsa rasta liya.

void F(int x, int y) {

  if (x == n and y == n) {
    // Current State: F(n,n): You have reached the destination
    AllPaths.push_back(CurrentPath);
    return; // Piche jaaiye aur baaki bache hue raste dhundiye.
  }

  visited[x][y] = 1;

  // You are at x,y:
  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if (nx >= 1 and nx <= n and ny >= 1 and ny <= n and visited[nx][ny] == 0) {
      CurrentPath.push_back(directionLabel[i]);
      F(nx, ny);

      // If I am standing here:
      CurrentPath.pop_back();
    }
  }

  visited[x][y] = 0; // Kyuki saare raste chahiye.
}

int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> maze[i][j];
      if (maze[i][j] == '0') {
        visited[i][j] = 1;
      }
    }
  }

  if (maze[1][1] == '0' and maze[n][n] == '0') {
    cout << "";
    return 0;
  }

  // Starting Point:
  // Recursion From Front:

  // Find all the paths from 1,1 to n,m:
  F(1, 1);

  // This Below will sort all path vector.
  sort(AllPaths.begin(), AllPaths.end());

  // THis below will sort inidivial string at index 2.
  //  sort(AllPaths[2].begin(), AllPaths[2].end());

  for (int i = 0; i < AllPaths.size(); i++) {
    cout << AllPaths[i] << " ";
  }

  return 0;
}
