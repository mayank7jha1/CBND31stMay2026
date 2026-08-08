#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define int long long

int32_t main() {
  int n, m;
  cin >> n >> m;

  if (n <= m) {
    cout << n << endl;
    return 0;
  }

  // When n>m:
  // We are manually har din jaa jaake dekh rahe hain ki konsa aisa din hain
  // jab barn empty hogya.
  // Day No : 1 Kya barn shaam ko empty hua?
  // Day No : 2 Kya barn shaam ko empty hua?
  //
  // .....................

  int day = 1; // We need this because this marks ki kitni sparrow aayegi.
  int BG = n;  // Initially Pehle din barn me grain jo hain vo n hain.

  while (BG > 0) {
    // Agle din par jaana hain and vo din dhundna hain jab barn khali hojaaye.
    // Current day me sparrow kitni aarahi hain? day jitni.

    // Mere barn me evening me grain kitne hain vo find karte hain.
    // Main har din jaake bas evening ke grain nikalke check kar raha hu.
    BG -= day;

    // Evening grain agar -ve hogye to kya karu?
    if (BG <= 0) {
      // Your answer is day no.
      break;
    }

    // Ab next day ke liye prepare karo.
    day++;
    BG += m;
    if (BG > n) {
      BG = n;
    }
  }

  cout << day << endl;

  return 0;
}
