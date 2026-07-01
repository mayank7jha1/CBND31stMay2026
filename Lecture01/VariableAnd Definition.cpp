#include <iostream>
using namespace std;

/*
 * Hi, My name is Mayank;
 // What are you doing?
 *
 *
 */

int main() {

  // These all are statements:
  // Definition and Initialisation of a Variable :

  // Type 01:
  int x;

  // Type 02 : Variable Definition and Initialisation through copy assignment.
  int y = 90;

  // Type 03 : Variable Definition and Initialisation : Copy list
  // Initialisation.
  int z = {45};

  // Type 04: Direct List Initialisation :
  int q{87}; // Narrowinging of data ko allow nahi karta.

  // Type 05 : Zero/Value Initialisation :
  int l{};

  // Type 06 :
  int p(56);

  int m = 90.67; // Yaha par narrowing of the data is allowed.

  // m ke ander value jo store hogi that will be 90 only.
  //  iss concept ko bolte hain type casting. (different type ke data ko
  // different bucket me cast karna).
  // Implicit and Explicit:

  // int n{90.67}; // Compiler would have flagged an error.

  // Both are same:
  char ch{'A'};
  char mh{65};

  float f{8.9};
  double d{4.555};

  bool bo = true;

  return 0;
}
