#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Counting Sort:
int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Idea :
  //  1. Find out the maximum element of the original array a.
  int maxi = INT_MIN;
  int mini = INT_MAX;

  for (int i = 0; i < n; i++) {
    if (maxi < a[i]) {
      maxi = a[i];
    }
    if (mini > a[i]) {
      mini = a[i];
    }
  }

  // 2. Define your Freq array :
  int freq[maxi - mini + 1]{};

  for (int i = 0; i < n; i++) {
    int os = a[i];
    int ns = os - mini; // You have shifted the os to ns with minimum element.
    freq[ns]++;
  }

  // 3.Print the freq:
  for (int i = 0; i < maxi - mini + 1; i++) {
    if (freq[i] > 0) {
      // What does this i represent :ns me element.
      int os = i + mini;
      cout << os << " " << freq[i] << endl;
    }
  }

  return 0;
}
