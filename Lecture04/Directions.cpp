/*
        A person wants to go from origin to a
        particular location, he can move in only
        4 directions(i.e. East, West, North, South)
        but his friend gave him a long route, help a
        person to find minimum Moves so that he can
        reach to the destination.

        Input  1 – NESNWES
        Output 1 – E

        You need to print the lexicographically(dic order)
        sorted string. Assume the string will have only
        ‘E’ ‘N’ ‘S’ ‘W’ characters.


        Input  2 – SSSNEEEW
        Output 2 – EESS
*/

#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char ch;
  int x{0}, y{0};

  while (cin >> ch) {
    if (ch == 'N') {
      y += 1;
    } else if (ch == 'S') {
      y -= 1;
    } else if (ch == 'E') {
      x += 1;
    } else {
      x -= 1;
    }
  }

  // cout << x << " " << y << endl;
  // Based Upon the value of x : I have to expand the input lexographically.

  if (x > 0) {
    // Mujhe x number of times east me jaana hain.
    // Pehle mujhe x number of time east ko print karvana hain.
    int i = 1;
    while (i <= x) {
      cout << "E";
      i += 1;
    }

    // Now after printing my east value : Based Upon the value of y print
    //  the value of N or S.

    if (y > 0) {
      // Appko y times N ko print karvana hain.
      int i = 1;
      while (i <= y) {
        cout << "N";
        i += 1;
      }

    } else {
      // Apko y times S south ko print karvana hain.
      y = y * (-1);
      int i = 1;
      while (i <= y) {
        cout << "S";
        i += 1;
      }
    }

  } else {
    // Mujhe x number of times west me jaana hain.
    //
    // Firstly print North or South.
    if (y > 0) {
      // Appko y times N ko print karvana hain.
      int i = 1;
      while (i <= y) {
        cout << "N";
        i += 1;
      }

    } else {
      // Apko y times S south ko print karvana hain.
      y = y * (-1);
      int i = 1;
      while (i <= y) {
        cout << "S";
        i += 1;
      }
    }

    // Now I can print x number of time west.
    // x is -ve :
    x = x * (-1);
    int i = 1;
    while (i <= x) {
      cout << "W";
      i += 1;
    }
  }

  return 0;
}
