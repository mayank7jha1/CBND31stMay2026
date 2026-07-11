#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int maxi = INT_MIN;

  for (int si = 0; si < n; si++) {
    for (int ei = si; ei < n; ei++) {
      // Mere Pass Ek subarray hain : [si,ei]
      // Task : Find out the sum of this subarray that starts from si and ends
      // at ei.
      int sum = 0;
      for (int k = si; k <= ei; k++) {
        sum += a[k];
      }

      // Main Check kar lunga : Ki mere current subarray ka sum mere overall har
      // subarray sum se bada toh nahi hain
      //  agar hain toh mere overall har subarray sum ko update kardunga.
      if (maxi < sum) {
        maxi = sum;
      }
    }
    // cout << endl;
  }

  // jab Main saare subarray evaluate kar chuka hu tab main isko print karva
  // dunga.
  cout << maxi << endl;

  return 0;
}
