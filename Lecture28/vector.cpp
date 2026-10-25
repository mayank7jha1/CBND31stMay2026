#include "../HeaderFiles/Vector.h"
#include <climits>
#include <cstring>
#include <iostream>

using namespace std;

int main() {

  Vector<int> v;
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  cout << v.size() << endl;
  cout << v.capacity() << endl;

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }

  return 0;
}
