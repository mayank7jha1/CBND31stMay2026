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

  // Idea : Go to every element of the array and then for the current element
  //  find out this current element occurs in the array how many times.

  for (int i = 0; i < n; i++) {
    // Current Index : i :
    // Current Element : a[i] :
    int ce = a[i];

    // What do you want to do with this current element?
    // Aapko ye count karna hain ki array a me ye current element kitni bar
    // aaraha hain.
    // Subtask : How many times this ce comes in my array a.
    int count = 0;
    for (int j = 0; j < n; j++) {
      if (a[j] == ce) {
        count++;
      }
    }
    // Main current element ki freq nikal chuka hu:
    //  Print that element and its freq:
    cout << ce << " " << count << endl;
  }

  return 0;
}
