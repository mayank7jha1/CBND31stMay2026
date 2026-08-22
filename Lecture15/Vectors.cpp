#include <climits>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

vector<int> F(vector<int> &a) {
  vector<int> p{3, 4, 5};
  return p;

  return {2, 3, 4, 5};
}

int main() {
  int a[10];
  int a1[]{3, 2, 13};
  int a2[4]{3, 2, 1};
  // -------------------------------------------
  int *b = new int[10];
  int *c = new int[5]{3, 2, 1};
  // int *d = new int[]{3, 2, 1, 4};
  // -------------------------------------------
  vector<int> v;
  vector<int> v1(5);    // This is a vector of size 5.
  vector<int> v2(5, 2); // This is a vector of size 5 for which all the blocks
                        // are initialised with 2.

  vector<int> v3{3, 2, 1, 3, 5};
  vector<int> v4 = v3;

  // Vector is a sequence container :
  // 1. Push_back : It inserts an element to the end of the vector.
  // 2. Push_front : vector don't have these.
  // 3. Pop_back : It removes one element from the back of the vector
  // 4. Pop_front : vector don't have these.
  // 5. Size : This gives me the size of the vector
  // 6. Empty : This tells me if the vector is empty or not.

  // Property : Vectors starts with 1 size and they double themselves whenever
  // they are full.
  // capacity : What the maximum number of elements this vector can hold before
  // doubling its size.

  int n;
  cin >> n;
  vector<int> v5(n);

  for (int i = 0; i < n; i++) {
    // int x;
    // cin >> x;
    // v5.push_back(x);
    cin >> v5[i];
  }

  // For iterating over the vector : there are three ways :
  // Method 1: Using For Loop:
  for (int i = 0; i < v5.size(); i++) {
    cout << v5[i] << " ";
  }
  cout << endl << "-------------------------------" << endl;
  // Method 2: Using For Each Loop:
  // For every element of this container that is going to represented by this
  // variable x do the task :
  for (int x : v5) {
    cout << x << " ";
  }

  cout << endl << "-------------------------------" << endl;
  // Method 3 : Using the help of iterators:
  cout << v5.size() << endl;
  cout << v5.capacity() << endl;

  auto it = v5.begin();
  auto pq = v5.end();

  for (vector<int>::iterator x = v5.begin(); x != v5.end(); x++) {
    cout << (*x) << " ";
  }

  cout << endl << "-------------------------------" << endl;

  vector<int> ans = F(v5);

  return 0;
}
