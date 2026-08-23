#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
#define int long long

// These vectors are for Sequence 1 and Sequence 2.
vector<int> S1, S2;
vector<int> f, s;

bool C1(int x, int y) {
  if (s[x] > s[y]) {
    return true;
  } else {
    return false;
  }
}

bool C2(int x, int y) {
  if (f[x] < f[y]) {
    return true;
  } else {
    return false;
  }
}

int32_t main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;

    f.push_back(x);
    s.push_back(y);

    if (x > y) {
      S2.push_back(i);
    } else {
      S1.push_back(i);
    }
  }

  if (S1.size() > S2.size()) {

    sort(S1.begin(), S1.end(), C1);
    cout << S1.size() << endl;
    for (int i = 0; i < S1.size(); i++) {
      cout << (S1[i] + 1) << " ";
    }

  } else {

    sort(S2.begin(), S2.end(), C2);

    cout << S2.size() << endl;
    for (int i = 0; i < S2.size(); i++) {
      cout << (S2[i] + 1) << " ";
    }
  }

  return 0;
}
