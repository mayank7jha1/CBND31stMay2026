#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int x;
  cin >> x;
  
  int *y = &x;
  
  cout << y << endl;
  cout << y + 1 << endl;

  return 0;
}


//6422284
//6422288