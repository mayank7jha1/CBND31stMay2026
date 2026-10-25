#include <climits>
#include <cstring>
#include <forward_list>
#include <iostream>
#include <list>

using namespace std;

list<int> F1(list<int> &z) {
  // If you want to iterate over the container :
  // For every element of this container z that is going to be represented as x
  // w do the following tasK:
  // Task can only be of fetching you cannot update the original element.
  for (int x : z) {
    cout << x << " ";
  }

  for (list<int>::iterator it = z.begin(); it != z.end(); it++) {
    cout << *(it) << " ";
  }

  return z;
}

// forward_list (Singly linked list)

int main() {
  // sequence container:
  forward_list<int> f;
  f.push_front(10);
  f.push_front(20);
  f.pop_front();

  list<int> l;
  l.push_back(10);
  l.push_front(20);
  l.pop_back();
  l.pop_front();

  list<int> l1 = l;
  forward_list<int> f1 = f;

  forward_list<int> f2{2, 3, 4, 5, 6};
  list<int> l2{3, 2, 1, 3, 4, 5};

  // These will be passed by value in function by default.
  // Hum log inko data type ki tarah bhi treat kar sakte hain.
  // You can also return a list/ forward_list from a function.

  list<int> l3 = F1(l2);


  l.reverse();
  l.sort();
  f.reverse();
  f.sort();

  return 0;
}
