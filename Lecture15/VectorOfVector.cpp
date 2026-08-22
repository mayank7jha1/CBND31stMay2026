#include <climits>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

int main() {

  // Variable Rows and Variable Columns hain.
  vector<vector<int>> v;
  vector<vector<int>> v1{{2, 1, 2, 3}, {3, 2, 3, 4, 4, 54, 5, 6, 6}};

  // THis is vector of which has 5 rows and variable columns.
  vector<vector<int>> v2(5);

  // Row are 6 and every row has 4 columns.
  vector<vector<int>> v3(6, vector<int>(4));

  // Row are 7 and every row has 5 column which all are initialised with
  // value 2.
  vector<vector<int>> v4(7, vector<int>(5, 2));

  vector<vector<int>> v5; // Every element of this vector v5 is also a vector.
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    vector<int> ans;
    for (int j = 0; j < m; j++) {
      int x;
      cin >> x;
      ans.push_back(x);
    }
    v5.push_back(ans);
  }

  for (int i = 0; i < v5.size(); i++) {
    for (int j = 0; j < v5[i].size(); j++) {
      cout << v5[i][j] << " ";
    }
    cout << endl;
  }

  // F(v);

  return 0;
}
