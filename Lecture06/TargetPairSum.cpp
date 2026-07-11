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

  // Idea : Go to every element of the array and treat the current element as
  // the first element of the pair and then for this first element of the pair
  // try to find the second element in the array using linear search and that
  //  second element will be target-the first element.

  for (int fei = 0; fei < n; fei++) {
    // For this current fei try to find the second element which satisfy our
    // condition.

    int fe = a[fei];
    int pse = target - fe;

    // We need to find this se in the entire array: Linear Search:
    for (int sei = 0; sei < n; sei++) {
      if (sei != fei and a[sei] == pse) {
        // Now I have fe and se : I now have the entire pair whose sum is equal
        // to target.
        cout << fe << " " << pse << endl;
      }
    }
  }

  return 0;
}
