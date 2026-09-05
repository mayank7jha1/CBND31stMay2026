#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define mod 1000000007
#define int long long

/*
 * Given a value n and a value k, total number of
 * ways to eat n flowers where flowers can only be either
 * red or white and you eat white flowers in bunch of k.
 *
 *  n = 3 , k = 2
 *  Way 01 : RWW
 *  Way 02 : RRR
 *  Way 03 : WWR
 *
 *  ans = 3.
 *
 *  n = 4 , k = 2
 *  Way 01 : RRRR
 *  Way 02 : RRWW
 *  Way 03 : WWRR
 *  Way 04 : WWWW
 *  Way 05 : RWWR
 */

int k;

// F(n): Total ways to eat n flowers.
// F(n) : F(n-1) + F(n-k)
// F(0) : 1

int F(int n) {

  // Stopping Point :
  if (n == 0) {
    return 1;
  }

  // Current State : F(n):

  int Op1 = F(n - 1) % mod;
  int Op2 = 0;

  if (n - k >= 0) {
    Op2 = F(n - k) % mod;
  }

  // Current State : F(n);
  int ans = (Op1 % mod + Op2 % mod) % mod;

  return (ans % mod);
}

int32_t main() {
  int n;
  cin >> n >> k;

  // Recursion from Back:
  //  Starting Point:
  cout << F(n) << endl;

  return 0;
}
