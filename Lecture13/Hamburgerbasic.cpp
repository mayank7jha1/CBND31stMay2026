#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define int long long

int32_t main() {

  char recipe[101];
  cin >> recipe;

  int nb, ns, nc;
  cin >> nb >> ns >> nc;
  int pb, ps, pc;
  cin >> pb >> ps >> pc;
  int r;
  cin >> r;

  // Ek hamburger ko banane me kitne bread, sausage and cheese chahiye.
  int sb = 0, ss = 0, sc = 0;
  for (int i = 0; recipe[i] != '\0'; i++) {
    if (recipe[i] == 'B') {
      sb++;
    } else if (recipe[i] == 'S') {
      ss++;
    } else {
      sc++;
    }
  }

  // Maine ab tak kitne hamburger bana liye hain.
  int count = 0;

  // Main ek ek karke hamburger bana raha hu and jab main aur hamburger
  //  nahi bana paata tab main bol dunga mera answer is count.
  // Kya main 1 hamburger bana sakta hu?
  // Kya main 2 hamburger bana sakta hu?
  // Kya main 3 hamburger bana sakta hu?
  // Kya main 4 hamburger bana sakta hu ?
  // .................................

  // jab tak mere paise khatam nahi hojaata tab tak hamburger banane ki
  //  koshish karte raho.

  while (r > 0) {

    // Mujhe current hamburger banane ke liye kitne extra paisa chahiye
    //  items ko market kharidne me.
    int EBM = 0, ESM = 0, ECM = 0;
    nb -= sb;
    if (nb < 0) {
      EBM = (-1) * (nb * pb);
      // For next hamburger making now kitchen has no bread.
      nb = 0;
    }

    ns -= ss;
    if (ns < 0) {
      ESM = (-1) * (ns * ps);
      // For next hamburger making now kitchen has no sausage.
      ns = 0;
    }

    nc -= sc;
    if (nc < 0) {
      ECM = (-1) * (nc * pc);
      // For next hamburger making now kitchen has no cheese.
      nc = 0;
    }

    // Mujhe ye pata chal gaya hain ki current hamburger ko
    //  banane me kitna extra paisa lagega.

    int EM = EBM + ESM + ECM;
    r -= EM;

    // Main current hamburger ko bana sakta hu.
    if (r >= 0) {
      count++;
    }
  }

  cout << count << endl;

  return 0;
}
