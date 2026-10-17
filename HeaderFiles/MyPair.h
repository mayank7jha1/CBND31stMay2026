#include <bits/stdc++.h>
using namespace std;

// This is my pair which is assuming ki first element of the pair is a string
// and second element of the pair is a integer.
template <typename T1, typename T2> class Pair {
public:
  T1 first;
  T2 second;

  // Issue yaha aata hain, kyuki aapko kaise initialise karna hain ye nahi pata.
  Pair() {
    first = "";
    second = 0;
  }

  Pair(T1 str, T2 m) {
    first = str;
    second = m;
  }
};
