#include <climits>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

// Logic :
// Wrong Logic :

// Sort this vector in desc. order: Aapko aapka answer mil jaayega.
// Ex : 10 2 : 102 (This is wrong).
//
//
// Convert this vector a into string vector and then sort this in desc. order.
// Ex : 10 and 2 as a string hain:
// String me Sorting is done on the basis of Dictionary.
// 10 me and 2 me se dictionary me pehle kaun aayega : Ye decide hota hain
// ascii value ke basis par:
// If I sort this in desc. Order :
// 2 10 : 210 (Correct answer)
//
// Why doesn't this logic work here.
// 30 and 34 : Desc . 34 30 :
// 0 2 10 : 2 10 0
// 100 1 : 100 1 (Wrong answer)
//
// 9 998 99 9998 : (You have converted all the integers to string for
// comparison).
//
//
// Desc. Order me Arrange kariye :
// 9998 998 99 9 : 9998998999 (Kya ye in numbers me largest hain?)
// Correct answer : 9999998998
// Above Logic of just desc. order sort fails.
//
// How Do we now arrange these numbers in such a way that they form the
// largest number?
//
// If I take any two string : x and y :
// xy
// yx
// Aap check karlo dono me bada kaun hain?
// string ke bich me direct comparison is allowed.
// If("Mayank">"Samyak")----- > False

void Bubblesort(vector<string> &p) {

  int n = p.size();

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      // Now compare  : p[j] and p[j+1]
      // What are the ways you can concatinate these string:
      string xy = p[j] + p[j + 1];
      string yx = p[j + 1] + p[j];

      if (yx > xy) {
        swap(p[j], p[j + 1]);
      }
    }
  }
}

string largestNumber(vector<int> &a) {

  // Faltu Condition: If you have all the numbers as zero print just a single
  // zero.
  int flag = 0;
  for (auto x : a) {
    if (x != 0) {
      flag = 1;
    }
  }

  string final{""};
  if (flag == 0) {
    return '0';
  }

  vector<string> st;

  for (int x : a) {
    // How to I convert ek integer ko string me?
    string p = to_string(x); // This will convert the integer x to string.
    st.push_back(p);
  }
  // Now I have the entire vector a but in string format.

  Bubblesort(st);

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
