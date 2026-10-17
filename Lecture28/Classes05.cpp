#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

class Mayank {
public:
  int count = 0;

  Mayank Update() {
    count++;
    return *this;
  }
};

int main() {

  Mayank m;
  cout << m.Update().count << endl;

  cout << m.Update().Update().Update().Update().Update().count << endl;

  return 0;
}
