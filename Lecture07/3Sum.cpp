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
  int target;
  cin >> target;

  // Task :
  // Go to every index of the array and treat the current index as the triplet
  // ka first element
  // and from there try to find a pair whose sum is target-current element which
  // you have taken as the triplet ka first element.

  for (int fei = 0; fei < n; fei++) {
    int fe = a[fei];
    // Now My question changes here as :
    // I want to find a pair whose sum is target - fe.
    // Idea : Go to the rest of the index after the first element of the triplet
    // and treat the
    // current element as the triplet ka second and pair ka first element and
    // look for the triplet ka third or pair ka second element.

    for (int sei = fei + 1; sei < n; sei++) {
      int se = a[sei];
      // When I am here :
      // I need to find the triplet ka third or pair ka second which is equal to
      // :  target-fe-se;
      // Linear Search and find this element in the rest of the array.

      for (int tei = sei + 1; tei < n; tei++) {
        int te = a[tei];
        if (fe + se + te == target) {
          // I have found a triplet :
          cout << fe << " " << se << " " << te << endl;
        }
      }
    }
  }

  return 0;
}
