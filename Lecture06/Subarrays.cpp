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

  // Go to every index of the array and treat that index as the starting point
  // of the subarray.
  for (int si = 0; si < n; si++) {

    // Current Starting Index : si:
    // For this current starting index si mere pass bahut saare ending index jo
    // multiple subarrays ko represent karte hain:
    // Main vo saare subarrays print karvana chahta hu.

    // For this si : I can have ei as : si,si+1,si+2,si+3_ _ _ _ _ _ _

    for (int ei = si; ei < n; ei++) {
      // When I am Standing here :Mere Current Subarray ki dimensions ye hain :
      // [si,ei]
      // Print this Subarray from [si,ei] index tak:

      for (int k = si; k <= ei; k++) {
        cout << a[k] << " ";
      }

      // Current Subarray Finish hogya:
      cout << endl;
    }
    // FOr this current si aapne saare subarray print karva diye hain with
    // different ending index.
    cout << endl;
  }

  return 0;
}
