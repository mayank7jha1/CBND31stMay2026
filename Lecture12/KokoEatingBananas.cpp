#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Computations : 10^9*10^4 : 10^13 :
int minEatingSpeed(int *a, int n, int h) {

  int maxi = INT_MIN;
  for (int i = 0; i < n; i++) {
    if (maxi < a[i]) {
      maxi = a[i];
    }
  }

  // Now you have the range of k : [1,maxi]:

  for (int k = 1; k <= maxi; k++) {
    // For the current value of k :
    // Find out in how many hours I am able to eay all the
    // Bananas.

    int sum = 0;

    for (int i = 0; i < n; i++) {
      sum += ((a[i] + k - 1) / k);
    }

    if (sum <= h) {
      return k;
    }
  }

  return 0;
}

// Computations : log(k)*n: log(10^9)* 10^4 : 30*10^4 : 
int minEatingSpeed2(int *a, int n, int h) {

  int maxi = INT_MIN;
  for (int i = 0; i < n; i++) {
    if (maxi < a[i]) {
      maxi = a[i];
    }
  }

  // Now you have the range of k : [1,maxi]:

  int s = 1, e = maxi;
  int ans = maxi;

  while (s <= e) {
    int mid = (s + e) / 2;

    // Kya main mid banana per hour ki speed se banana khaunga to saare pile ke
    // banana h hour me khapaaraha rahu ki nahi

    int sum = 0;

    for (int i = 0; i < n; i++) {
      sum += ((a[i] + mid - 1) / mid);
    }

    if (sum <= h) {
      // Main mid banana/per hour me saare pile ke  banana khaparaha hu:
      ans = mid;
      e = mid - 1;
    } else {
      s = mid + 1;
    }
  }

  return ans;
}

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int h;
  cin >> h;

  cout << minEatingSpeed(a, n, h) << endl;
  cout << minEatingSpeed2(a, n, h) << endl;

  return 0;
}
