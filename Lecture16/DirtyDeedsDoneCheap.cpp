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
  // Aap abhi do pair ko compare karna chahte ho ?
  //  Konse do pair : (f[x],s[x])  and (f[y],s[y])
  //  Kaise compare karna chahta hu ?
  //  Desc. order me on the basis of second element.
  // x index vala pair pehle aaraha hain fir y index vala pair aaraha hain.

  if (s[x] > s[y]) {
    // Swap nahi karna chahiye:
    return true;
  } else {
    return false;
  }
}

bool C2(int x, int y) {
  // Pairs : (f[x],s[x]) and (f[y],s[y])

  // Compare karna hain on the basis of first element of the pair in asc.order.
  if (f[x] < f[y]) {
    return true;
  } else {
    return false;
  }

  // return (f[x] < f[y]);
}

int32_t main() {
  int n;
  cin >> n;

  // Representation : Vector f will store the first of all the pairs and vector
  // s will store the second of all the pairs.
  // Hence, 3 rd Pair will be : (f[2],s[2])

  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y; // Current Pair given to us by user is (x,y).
    // Put this current pair x,y to the respective vectors.

    f.push_back(x);
    s.push_back(y);

    // Abhi hi decide karlete hu ki ye current pair S1 ka part hain ya S2 ka.
    // Current Pair : (x,y):

    if (x > y) {
      // Put the index of this pair in S2 vector.
      // Index yaha par main pair nunber ki baat kar raha hu taaki kal
      // ko S2 me agar number 3 pada hai uska matlab hain aap pair f[3],s[3]
      // ki baat kar rahe ho and vo pair aapka S2 ka part hain.
      S2.push_back(i);
    } else {
      S1.push_back(i);
    }
  }

  // Now I have the S1 and S2 ke all the pairs.
  // Which is the sequence I should build:
  // Jiska size jada ho.
  if (S1.size() > S2.size()) {
    // Build the sequence S1.
    // What do I mean from building S1.
    // Arrange all the pairs of this S1 by comparing and sorting the second
    // element of the pairs in desc. order.

    sort(S1.begin(), S1.end(), C1);
    cout << S1.size() << endl;
    for (int i = 0; i < S1.size(); i++) {
      cout << (S1[i] + 1) << " ";
    }

  } else {
    // Build the S2.

    sort(S2.begin(), S2.end(), C2);

    cout << S2.size() << endl;
    for (int i = 0; i < S2.size(); i++) {
      cout << (S2[i] + 1) << " ";
    }
  }

  return 0;
}
