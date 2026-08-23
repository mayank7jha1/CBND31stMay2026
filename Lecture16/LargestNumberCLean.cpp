#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

// Comparator:
bool Compare(string &x, string &y) {

  string xy = x + y;
  string yx = y + x;

  if (xy < yx) {
    return false;
  } else {
    return true;
  }
}

// Computation : Bubble Sort Worst Case :~(n^n)
// We can make the sorting fast by using the inbuild sort function:

// void Bubblesort(vector<string> &p) {

//   int n = p.size();

//   for (int i = 0; i < n - 1; i++) {
//     for (int j = 0; j < n - i - 1; j++) {
//       if (Compare(p[j], p[j + 1]) == 0) {
//         swap(p[j], p[j + 1]);
//       }
//     }
//   }
// }

string largestNumber(vector<int> &a) {
  int flag = 0;
  for (auto x : a) {
    if (x != 0) {
      flag = 1;
    }
  }

  string final{""};
  if (flag == 0) {
    return "0";
  }

  vector<string> st;

  for (int x : a) {
    string p = to_string(x);
    st.push_back(p);
  }

  // Bubblesort(st);
  // You have now used the STL Sort:
  // Computation : ~nlogn which is very fast.
  sort(st.begin(), st.end(), Compare);

  for (int i = 0; i < st.size(); i++) {
    final = final + st[i];
  }

  return final;
}

int main() {
  int n;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  string st = largestNumber(v);
  cout << st << endl;

  return 0;
}
