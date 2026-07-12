#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Computations : To Compute : The amount of time your program(algo) is doing
// some ignore the input and output statements.
// Usually Aap agar apne program ki computations ko order of input ki terms me
// bataoge toh ussi ko hum log time complexity bolte hain.
int main() {

  int n;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // ~n  : Computations me kaam karta hain.
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i]; // Ye line kitni bar chalegi: n times:
  }

  cout << sum << endl;

  return 0;
}
