#include "ListNode.h"
#include <iostream>

template <typename T> void InsertAtHead(ListNode<T> *&h, T data) {
  ListNode<T> *newNode = new ListNode<T>(data);
  newNode->next = h;
  h = newNode;
}

template <typename T> void InsertAtTail(ListNode<T> *&head, T data) {
  ListNode<T> *newNode = new ListNode<T>(data);

  if (head == nullptr) {
    head = newNode;
    return;
  }
  ListNode<T> *temp = head;
  while (temp->next != nullptr) {
    temp = temp->next;
  }
  temp->next = newNode;
}

template <typename T>
void InsertAtPosition(ListNode<T> *&head, T data, int pos) {
  if (pos <= 1) {
    InsertAtHead(head, data);
    return;
  }
  ListNode<T> *temp = head;
  for (int i = 1; i < pos - 1 && temp->next != nullptr; i++) {
    temp = temp->next;
  }
  ListNode<T> *newNode = new ListNode<T>(data);
  newNode->next = temp->next;
  temp->next = newNode;
}

template <typename T> void DeleteAtHead(ListNode<T> *&head) {
  if (head == nullptr)
    return;
  ListNode<T> *temp = head;
  head = head->next;
  delete temp;
}

template <typename T> void DeleteAtTail(ListNode<T> *&head) {
  if (head == nullptr)
    return;
  if (head->next == nullptr) {
    delete head;
    head = nullptr;
    return;
  }
  ListNode<T> *temp = head;
  while (temp->next->next != nullptr) {
    temp = temp->next;
  }
  delete temp->next;
  temp->next = nullptr;
}

template <typename T> void DeleteAtPosition(ListNode<T> *&head, int pos) {
  if (head == nullptr)
    return;
  if (pos <= 1) {
    DeleteAtHead(head);
    return;
  }
  ListNode<T> *temp = head;
  for (int i = 1; i < pos - 1 && temp->next != nullptr; i++) {
    temp = temp->next;
  }
  if (temp->next == nullptr)
    return;
  ListNode<T> *toDelete = temp->next;
  temp->next = toDelete->next;
  delete toDelete;
}

template <typename T> void DeleteByValue(ListNode<T> *&head, T val) {
  if (head == nullptr)
    return;
  if (head->val == val) {
    DeleteAtHead(head);
    return;
  }
  ListNode<T> *temp = head;
  while (temp->next != nullptr && temp->next->val != val) {
    temp = temp->next;
  }
  if (temp->next == nullptr)
    return;
  ListNode<T> *toDelete = temp->next;
  temp->next = toDelete->next;
  delete toDelete;
}

template <typename T> void DeleteList(ListNode<T> *&head) {
  while (head != nullptr) {
    DeleteAtHead(head);
  }
}

template <typename T> void PrintLL(ListNode<T> *head) {

  while (head != nullptr) {
    std::cout << head->val << " --> ";
    head = head->next;
  }
  std::cout << "NULL" << std::endl;
}

template <typename T> void PrintLL02(ListNode<T> *&head) {
  ListNode<T> *temp = head;
  while (temp != nullptr) {
    std::cout << temp->val << " --> ";
    temp = temp->next;
  }
  std::cout << "NULL" << std::endl;
}

template <typename T> void Print(ListNode<T> *head) {
  ListNode<T> *temp = head;
  while (temp != nullptr) {
    std::cout << temp->val << " ---> ";
    temp = temp->next;
  }
  std::cout << "NULL" << std::endl;
}

template <typename T> int Length(ListNode<T> *head) {
  int count = 0;
  while (head != nullptr) {
    count++;
    head = head->next;
  }
  return count;
}

template <typename T> bool SearchInLL(ListNode<T> *head, T target) {

  while (head != nullptr) {
    if (head->val == target) {
      return true;
    }
    head = head->next;
  }

  return false;
}

template <typename T> bool SearchInLLRecursively(ListNode<T> *head, T target) {
  if (head == nullptr) {
    return false;
  }
  if (head->val == target) {
    return true;
  }

  return SearchInLLRecursively(head->next, target);
}

template <typename T> T MidPoint1(ListNode<T> *head) {
  if (head == nullptr) {
    std::cout << "List is empty!" << std::endl;
    return T{};
  }

  int len = Length(head) / 2;
  while (len > 0) {
    head = head->next;
    len--;
  }

  return head->val;
}

template <typename T> ListNode<T> *MidPoint2(ListNode<T> *head) {
  ListNode<T> *slow = head;
  ListNode<T> *fast = head;

  while (fast != nullptr && fast->next != nullptr) {
    fast = fast->next->next;
    slow = slow->next;
  }

  return slow;
}

template <typename T> ListNode<T> *MidPoint3(ListNode<T> *head) {
  if (head == nullptr) {
    return nullptr;
  }

  ListNode<T> *slow = head;
  ListNode<T> *fast = head->next;

  while (fast != nullptr && fast->next != nullptr) {
    fast = fast->next->next;
    slow = slow->next;
  }

  return slow;
}

template <typename T> void ReverseLLIteratively(ListNode<T> *&head) {
  ListNode<T> *current = head;
  ListNode<T> *prev = nullptr;
  ListNode<T> *n = nullptr;
  while (current != nullptr) {
    n = current->next;
    current->next = prev;
    prev = current;
    current = n;
  }
  head = prev;
}

template <typename T> ListNode<int> *ReverseByCreatingNewLL(ListNode<T> *head) {
  ListNode<T> *newLLHead = nullptr;

  // Iterate over the originial LinkedList  and get me the values of the
  // original linked list.

  while (head != nullptr) {
    // Current Node : head
    //  Value of the current node : head->val
    InsertAtHead(newLLHead, head->val);
    head = head->next;
  }

  return newLLHead;
}

template <typename T> ListNode<T> *ReverseLLRecursively(ListNode<T> *head) {
  if (head == nullptr || head->next == nullptr)
    return head;
  ListNode<T> *reversedHead = ReverseLLRecursively(head->next);
  head->next->next = head;
  head->next = nullptr;
  return reversedHead;
}

template <typename T>
ListNode<T> *reverseBetween(ListNode<T> *head, int left, int right) {
  if (head == nullptr || left == right) {
    return head;
  }

  ListNode<T> *dummy = new ListNode<T>();
  dummy->next = head;

  ListNode<T> *prevLeft = dummy;
  for (int i = 1; i < left; i++) {
    prevLeft = prevLeft->next;
  }

  ListNode<T> *current = prevLeft->next;
  ListNode<T> *subPrev = nullptr;
  ListNode<T> *subStart = current;
  ListNode<T> *next = nullptr;

  for (int i = 0; i < right - left + 1; i++) {
    next = current->next;
    current->next = subPrev;
    subPrev = current;
    current = next;
  }

  prevLeft->next = subPrev;
  subStart->next = current;

  ListNode<T> *newHead = dummy->next;
  delete dummy;

  return newHead;
}

template <typename T>
void SolveReverse(ListNode<T> *end, ListNode<T> *&start, bool &stop, int left,
                  int right) {

  if (right == 1) {
    return;
  }

  end = end->next;

  if (left > 1) {
    start = start->next;
  }

  SolveReverse(end, start, stop, left - 1, right - 1);

  if (end == start || end->next == start) {
    stop = true;
  }

  if (!stop) {
    std::swap(end->val, start->val);
    start = start->next;
  }
}

template <typename T>
ListNode<T> *reverseBetweenRecursive(ListNode<T> *head, int left, int right) {
  ListNode<T> *start = head;
  bool stop = false;
  SolveReverse(head, start, stop, left, right);
  return head;
}

template <typename T> void Cycle_Creation(ListNode<T> *head) {
  if (head == nullptr || head->next == nullptr)
    return;
  ListNode<T> *tail = head;
  while (tail->next != nullptr) {
    tail = tail->next;
  }

  tail->next = head->next->next;
}

template <typename T> bool IsCycle(ListNode<T> *head) {
  ListNode<T> *slow = head;
  ListNode<T> *fast = head;
  while (fast != nullptr && fast->next != nullptr) {
    fast = fast->next->next;
    slow = slow->next;
    if (fast == slow)
      return true;
  }
  return false;
}

template <typename T> void Break_Cycle(ListNode<T> *head) {
  if (!IsCycle(head)) {
    std::cout << "No cycle found." << std::endl;
    return;
  }

  ListNode<T> *slow = head;
  ListNode<T> *fast = head;

  while (fast != nullptr && fast->next != nullptr) {
    fast = fast->next->next;
    slow = slow->next;
    if (fast == slow)
      break;
  }

  slow = head;

  ListNode<int> *prev = head;
  while (prev->next != fast) {
    prev = prev->next;
  }

  while (slow != fast) {
    slow = slow->next;
    fast = fast->next;
    prev = prev->next;
  }

  // ListNode<T> *tail = fast;
  // while (tail->next != fast) {
  //   tail = tail->next;
  // }

  std::cout << "Cycle starts at node with value: " << fast->val << std::endl;
  prev->next = nullptr;
  std::cout << "Cycle removed successfully." << std::endl;
}

template <typename T> bool isPalindrome(ListNode<T> *head) {
  if (head == nullptr || head->next == nullptr)
    return true;
  ListNode<T> *mid = MidPoint3(head);
  ListNode<T> *secondHalf = mid->next;
  mid->next = nullptr;
  ReverseLLIteratively(secondHalf);
  ListNode<T> *left = head;
  ListNode<T> *right = secondHalf;
  bool result = true;
  while (right != nullptr) {
    if (left->val != right->val) {
      result = false;
      break;
    }
    left = left->next;
    right = right->next;
  }
  ReverseLLIteratively(secondHalf);
  mid->next = secondHalf;
  return result;
}

template <typename T> void reorderList(ListNode<T> *head) {
  if (head == nullptr || head->next == nullptr)
    return;
  ListNode<T> *mid = MidPoint2(head);
  ListNode<T> *h2 = mid->next;
  mid->next = nullptr;
  ReverseLLIteratively(h2);
  ListNode<T> *h1 = head;
  while (h2 != nullptr) {
    ListNode<T> *nextH1 = h1->next;
    ListNode<T> *nextH2 = h2->next;
    h1->next = h2;
    h2->next = nextH1;
    h1 = nextH1;
    h2 = nextH2;
  }
}

template <typename T> ListNode<T> *partition(ListNode<T> *head, T x) {
  ListNode<T> smallDummy, largeDummy;
  ListNode<T> *smallTail = &smallDummy;
  ListNode<T> *largeTail = &largeDummy;
  smallDummy.next = largeDummy.next = nullptr;
  while (head != nullptr) {
    ListNode<T> *next = head->next;
    head->next = nullptr;
    if (head->val < x) {
      smallTail->next = head;
      smallTail = head;
    } else {
      largeTail->next = head;
      largeTail = head;
    }
    head = next;
  }
  smallTail->next = largeDummy.next;
  return smallDummy.next;
}

template <typename T> ListNode<T> *oddEvenList(ListNode<T> *head) {
  if (head == nullptr || head->next == nullptr)
    return head;
  ListNode<T> *odd = head;
  ListNode<T> *even = head->next;
  ListNode<T> *evenHead = even;
  while (even != nullptr && even->next != nullptr) {
    odd->next = even->next;
    odd = odd->next;
    even->next = odd->next;
    even = even->next;
  }
  odd->next = evenHead;
  return head;
}

template <typename T> ListNode<T> *NthFromEnd(ListNode<T> *head, int n) {
  ListNode<T> *fast = head;
  ListNode<T> *slow = head;
  for (int i = 0; i < n; i++) {
    if (fast == nullptr) {
      std::cout << "n is greater than the length of the list." << std::endl;
      return nullptr;
    }
    fast = fast->next;
  }
  while (fast != nullptr) {
    fast = fast->next;
    slow = slow->next;
  }
  return slow;
}

template <typename T>
ListNode<T> *MergeTwoSortedLists(ListNode<T> *l1, ListNode<T> *l2) {
  ListNode<T> dummy;
  ListNode<T> *tail = &dummy;
  dummy.next = nullptr;
  while (l1 != nullptr && l2 != nullptr) {
    if (l1->val <= l2->val) {
      tail->next = l1;
      l1 = l1->next;
    } else {
      tail->next = l2;
      l2 = l2->next;
    }
    tail = tail->next;
  }
  tail->next = (l1 != nullptr) ? l1 : l2;
  return dummy.next;
}

template <typename T> void RemoveDuplicatesSorted(ListNode<T> *head) {
  while (head != nullptr && head->next != nullptr) {
    if (head->val == head->next->val) {
      ListNode<T> *dup = head->next;
      head->next = dup->next;
      delete dup;
    } else {
      head = head->next;
    }
  }
}

template <typename T> ListNode<T> *RotateList(ListNode<T> *head, int k) {
  if (head == nullptr || head->next == nullptr || k == 0)
    return head;
  int len = 1;
  ListNode<T> *tail = head;
  while (tail->next != nullptr) {
    tail = tail->next;
    len++;
  }
  k = k % len;
  if (k == 0)
    return head;
  ListNode<T> *newTail = head;
  for (int i = 0; i < len - k - 1; i++) {
    newTail = newTail->next;
  }
  ListNode<T> *newHead = newTail->next;
  newTail->next = nullptr;
  tail->next = head;
  return newHead;
}
