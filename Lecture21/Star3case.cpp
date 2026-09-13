#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define int long long

// F(x) : Minimum Steps to reach nth staircase from the xth stair.

int F(int n, int *mg, bool *visited, int x) {
  // Stopping Point:
  if (x == n) {
    return 0;
  }

  // Current State: F(x):
  // I am sure this is an unvisited State :
  visited[x] = 1;

  int Op1 = 1e9, Op2 = 1e9;
  if (x + 1 <= n and visited[x + 1] == 0) {
    // You are taking 1 step jump:
    Op1 = 1 + F(n, mg, visited, x + 1);
  }

  if (x + mg[x] <= n and visited[x + mg[x]] == 0 and x + mg[x] >= 0) {
    // You are taking magnitude step jump:
    Op2 = 1 + F(n, mg, visited, x + mg[x]);
  }

  // Current State: F(x):
  // Now I have the current State ka answer:

  int ans = min(Op1, Op2);

  // Since you are going back to the previous state which has called this
  // current
  //  state F(x) now this x should be marked unvisited as we should be allowed
  //  to re visit this from a different path.

  visited[x] = 0; // Backtracking:

  return ans;
}

int32_t main() {
  int t;
  cin >> t;

  for (int i = 1; i <= t; i++) {
    int n;
    cin >> n;
    int mg[n];
    for (int i = 0; i < n; i++) {
      cin >> mg[i];
    }

    bool visited[n]{};

    int ans = F(n, mg, visited, 0);

    if (ans > 1e8) {
      cout << -1 << endl;
    } else {
      cout << ans << endl;
    }
  }

  return 0;
}
