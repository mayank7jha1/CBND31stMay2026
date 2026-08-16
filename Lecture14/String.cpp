#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main() {

  // Containers can be treated as Data Types.
  string s;
  cin >> s;
  cout << s << endl;

  char ch[100]; // Size is 100.
  cin >> ch;
  cout << ch << endl;

  int m = strlen(ch);
  cout << strlen(ch) << endl;
  cout << s.length() << endl;

  for (int i = 0; i < s.length(); i++) {
    cout << s[i];
  }

  cout << endl;

  s = s + "Rahul";
  s = s + 'E';
  cout << s << endl;

  // Sequence Containers : push_back,pop_back,push_front,pop_front
  // Container Adapters  : push,pop,top,front
  // Associative Containers : insert, find,count

  s.push_back('R');
  cout << s << endl;
  s.pop_back();
  cout << s << endl;
  sort(ch, ch + m);
  cout << ch << endl;

  // Container Ke case me you cannot directly fetch the address easily.
  sort(s.begin(), s.end());
  reverse(s.begin(), s.end());
  cout << s << endl;

  return 0;
}
