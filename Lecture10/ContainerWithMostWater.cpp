#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;
  int height[n];
  for (int i = 0; i < n; i++) {
    cin >> height[i];
  }

  int sp = 0, ep = n - 1;
  int maxArea = INT_MIN;

  while (sp <= ep) {
    int Distance = ep - sp;
    int Height = min(height[sp], height[ep]);

    if (height[sp] < height[ep]) {
      sp++;
    } else {
      ep--;
    }

    maxArea = max(maxArea, Distance * Height);
  }

  cout << maxArea << endl;

  return 0;
}
