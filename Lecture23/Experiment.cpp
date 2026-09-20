#include <iostream>
#include <vector>
using namespace std;

// Multidimensional Arrays:
int a[10][4][2]; // This is a 3-d Array jisme dimentions are 10*4*2;
// This above is an array of size 10 where each index contains a 2-d array of ]
//  dimentions 4*2.

int main() {
  // Container:
  // 1. String
  // 2. Vector

  // 1. Array of Vector
  // 2. Array of String
  // 3. Vector of Vector
  // 4. Vector of vector of string.

  // Array of Arrays:
  // Advantage : It is Fastest and Defined in Static Memory.
  // Disadvantage : You have always have to give its sizes for row and columns;
  // IT will always have fixed rows and fixed columns.

  int b[10][2];
  int b1[10][2]{};
  int b2[10][5]{{1, 2}, {2, 3}, {4, 3}, {2, 3}};
  int b3[10][5]{};
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> b3[i][j];
    }
  }

  // Array of Vectors:  2-D Structre.
  // Har ek element of this array is a vector .
  // Containers can be treated as the data type.
  vector<int> c[10]; // Every bucket of this array is a vector.
  // c[i] : vector.

  // Rows are fixed but columns are not, vector can of variable size.
  vector<int> c1[10];
  vector<int> c2[10]{};
  vector<int> c3[10]{{2, 2, 2, 3, 3}, {3, 3, 2, 3, 3, 1}, {3, 3, 2}};

  for (int i = 0; i < 10; i++) {
    int x;
    cin >> x;
    c3[i].push_back(x);
  }

  // When the Sizes are defined.
  // c3[i] : It is a vector.
  // c3[i][j] : It is an element of the vector that is at index i or row i.
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < c3[i].size(); j++) {
      cout << c3[i][j] << " ";
    }
  }

  // Vector of vector
  // This below is a vector who will have a vector at every index.
  // This vector of vector can have variable length column as well as variable
  // length rows.
  //
  // Har ek element of this vector is also a vector.
  vector<vector<int>> v;

  // This is a vector of vector have number of rows as 10.
  vector<vector<int>> v1(10);

  // This is a vector of vector having number of rows as 10 and number of
  // columns as 5.
  vector<vector<int>> v2(10, vector<int>(5));

  // THis is a vector of vector having number of rows as 10, number of columns
  // as 5 and every box of this 10*5 matrix is having a value 2.
  vector<vector<int>> v3(10, vector<int>(5, 2)); // THis is now like 2-d Array.

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> v3[i][j];
    }
  }

  for (int i = 0; i < 10; i++) {
    vector<int>
        ans; // Ye answer vector mera ith row ke saare element ko user se lega.

    for (int j = 0; j < 5; j++) {
      // cin >> v[i][j];Not Allowed.

      int x;
      cin >> x;
      ans.push_back(x); // Ek row ke saare element are now in vector ans.
    }

    // Now mere pass ith row ke saare element hain stored inside the vector
    //  ans main is answer ko pushback kardeta hu v ke ander.
    // v ka har ek element ek vector hi hain.
    v.push_back(ans);
  }

  // v[0] : This is a vector.
  // v[0][2]:This is a element at 0th row and 2 column.

  // Koi bhi container pass kiya jaayega function me toh vo pass by value hoga
  // by default.
  //
  // Any container can be treated as a  data type.

  // This is a vector of string type.
  vector<string> z;
  // Every element of this za will be a string.
  // z[2]: EK string : Rahul
  // z[2][3]: 2nd index vali string ka 3 rd character. : u

  vector<string> z1{"Mayank", "Samyak", "Rahul", "Atul", "Aman"};

  for (int i = 0; 10; i++) {
    string s;
    cin >> s;
    z[i] = s;
  }

  for (int i = 0; 10; i++) {
      
    for (int j = 0; j < 10; j++) {
      char ch;
      cin >> ch;
      z[i].push_back(ch);
    }

    
  }
}
