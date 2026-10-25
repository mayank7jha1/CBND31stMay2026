#include "../HeaderFiles/LinkedList.h"
#include <climits>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
  ListNode<int> *head = nullptr;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;

    InsertAtHead(head, x);
  }

  return 0;
}
