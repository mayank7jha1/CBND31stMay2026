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

  for (int i = 0; i < n; i++) {
    if (maxi < a[i]) {
      maxi = a[i];
    }
  }

  // 2. Define your Freq array :
  int freq[maxi + 1]{};

  // 3. Build your Freq array :
  //  3.1 : Iterate over the original array and for the current element
  // of the original array go to the same index of the freq array and
  // update its value by 1.

  for (int i = 0; i < n; i++) {
    int ce = a[i];
    freq[ce] = freq[ce] + 1;
  }

  // 4. Print your freq array :
  for (int i = 0; i < maxi + 1; i++) {
    // Current Index : i
    // Current index of this freq array kya represent karta hain:
    // Original array ka element ye i represent karta hain.
    // Agar freq[i] ye kya represent karta hain : ki ye element i
    // original array me kitni bar aaya hain.
    //  Agar kisi i par freq[i] ==0 iska kya matlab hua?
    // Matlab ye i element original array me ek bar bhi nahi aaya?
    // Kya mujhe is element jo original array me ek bar bhi nahi aaya
    // usko print karna chahiye?
    // NO.

    if (freq[i] > 0) {
      cout << i << " ---> " << freq[i] << endl;
    }
  }

  return 0;
}
