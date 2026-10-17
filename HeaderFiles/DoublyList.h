#include "DoublyListNode.h"
#include <bits/stdc++.h>

template <typename T> void InsertAtHead(DoublyListNode<T> *&head, T data) {
  DoublyListNode<T> *newNode = new DoublyListNode<T>(data);
  newNode->next = head;
  if (head != nullptr) {
    head->prev = newNode;
  }
  newNode->prev = nullptr;
  head = newNode;
}

template <typename T> void InsertAtTail(DoublyListNode<T> *&head, T data) {
  DoublyListNode<T> *newNode = new DoublyListNode<T>(data);
  if (head == nullptr) {
    head = newNode;
    return;
  }
  DoublyListNode<T> *temp = head;
  while (temp->next != nullptr) {
    temp = temp->next;
  }
  temp->next = newNode;
  newNode->prev = temp;
}

template <typename T>
void InsertAtPosition(DoublyListNode<T> *&head, T data, int pos) {
  if (pos <= 1) {
    InsertAtHead(head, data);
    return;
  }
  DoublyListNode<T> *temp = head;
  for (int i = 1; i < pos - 1 and temp->next != nullptr; i++) {
    temp = temp->next;
  }
  DoublyListNode<T> *newNode = new DoublyListNode<T>(data);
  newNode->next = temp->next;
  newNode->prev = temp;
  if (temp->next != nullptr) {
    temp->next->prev = newNode;
  }
  temp->next = newNode;
}

template <typename T> void deleteAtHead(DoublyListNode<T> *&head) {
  if (head == nullptr) {
    return;
  }
  if (head->next == nullptr) {
    delete head;
    head = nullptr;
    return;
  }
  DoublyListNode<T> *temp = head;
  head = head->next;
  head->prev = nullptr;
  delete temp;
}
template <typename T> void deleteAtTail(DoublyListNode<T> *&head) {
  if (head == nullptr) {
    return;
  }
  if (head->next == nullptr) {
    delete head;
    head = nullptr;
    return;
  }
  DoublyListNode<T> *tail = head;
  while (tail->next != nullptr) {
    tail = tail->next;
  }
  tail->prev->next = nullptr;
  delete tail;
}

template <typename T> void deleteAtPos(DoublyListNode<T> *&head, int pos) {
  if (head == nullptr) {
    return;
  }
  if (pos <= 1) {
    deleteAtHead(head);
    return;
  }
  DoublyListNode<T> *temp = head;
  for (int i = 1; i < pos and temp != nullptr; i++) {
    temp = temp->next;
  }
  if (temp == nullptr) {
    return;
  }
  if (temp->prev != nullptr) {
    temp->prev->next = temp->next;
  }
  if (temp->next != nullptr) {
    temp->next->prev = temp->prev;
  }
  delete temp;
}

template <typename T> void deleteByValue(DoublyListNode<T> *&head, T data) {
  if (head == nullptr) {
    return;
  }
  DoublyListNode<T> *temp = head;
  while (temp != nullptr and temp->val != data) {
    temp = temp->next;
  }
  if (temp == nullptr) {
    return;
  }
  if (temp == head) {
    deleteAtHead(head);
    return;
  }
  if (temp->prev != nullptr) {
    temp->prev->next = temp->next;
  }
  if (temp->next != nullptr) {
    temp->next->prev = temp->prev;
  }
  delete temp;
}

template <typename T> void PrintForward(DoublyListNode<T> *head) {
  std::cout << "NULL <-- ";
  while (head != nullptr) {
    std::cout << head->val;
    if (head->next != nullptr) {
      std::cout << " <--> ";
    }
    head = head->next;
  }
  std::cout << " --> NULL" << std::endl;
}

template <typename T> void PrintBackward(DoublyListNode<T> *head) {
  if (head == nullptr) {
    std::cout << "NULL" << std::endl;
    return;
  }
  DoublyListNode<T> *tail = head;
  while (tail->next != nullptr) {
    tail = tail->next;
  }
  std::cout << "NULL <-- ";
  while (tail != nullptr) {
    std::cout << tail->val;
    if (tail->prev != nullptr) {
      std::cout << " <--> ";
    }
    tail = tail->prev;
  }
  std::cout << " --> NULL" << std::endl;
}

template <typename T> int LengthDLL(DoublyListNode<T> *head) {
  int count = 0;
  while (head != nullptr) {
    count++;
    head = head->next;
  }
  return count;
}

template <typename T> bool SearchInDLL(DoublyListNode<T> *head, T key) {
  while (head != nullptr) {
    if (head->val == key) {
      return true;
    }
    head = head->next;
  }
  return false;
}

template <typename T> void ReverseDLL(DoublyListNode<T> *&head) {
  if (head == nullptr) {
    return;
  }
  DoublyListNode<T> *current = head;
  DoublyListNode<T> *temp = nullptr;
  while (current != nullptr) {
    temp = current->prev;
    current->prev = current->next;
    current->next = temp;
    current = current->prev;
  }
  if (temp != nullptr) {
    head = temp->prev;
  }
}

template <typename T> bool isPalindrome(DoublyListNode<T> *head) {
  if (head == nullptr or head->next == nullptr) {
    return true;
  }
  DoublyListNode<T> *tail = head;
  while (tail->next != nullptr) {
    tail = tail->next;
  }
  while (head != tail and head->prev != tail) {
    if (head->val != tail->val) {
      return false;
    }
    head = head->next;
    tail = tail->prev;
  }
  return true;
}

// Doublt Linked List : Very Important and Very Famous:
class LRUNode {
public:
  int key, value;
  LRUNode *prev, *next;
  LRUNode(int k, int v) : key(k), value(v), prev(nullptr), next(nullptr) {}
};
class LRUCache {
private:
  int capacity;
  std::unordered_map<int, LRUNode *> map;
  LRUNode *dummyHead;
  LRUNode *dummyTail;
  void removeNode(LRUNode *node) {
    node->prev->next = node->next;
    node->next->prev = node->prev;
  }
  void addToFront(LRUNode *node) {
    node->next = dummyHead->next;
    node->prev = dummyHead;
    dummyHead->next->prev = node;
    dummyHead->next = node;
  }

public:
  LRUCache(int cap) {
    capacity = cap;
    dummyHead = new LRUNode(0, 0);
    dummyTail = new LRUNode(0, 0);
    dummyHead->next = dummyTail;
    dummyTail->prev = dummyHead;
  }
  int get(int key) {
    if (map.find(key) == map.end()) {
      return -1;
    }
    LRUNode *node = map[key];
    removeNode(node);
    addToFront(node);
    return node->value;
  }
  void put(int key, int value) {
    if (map.find(key) != map.end()) {
      LRUNode *node = map[key];
      node->value = value;
      removeNode(node);
      addToFront(node);
    } else {
      if ((int)map.size() == capacity) {
        LRUNode *lru = dummyTail->prev;
        removeNode(lru);
        map.erase(lru->key);
        delete lru;
      }
      LRUNode *newNode = new LRUNode(key, value);
      addToFront(newNode);
      map[key] = newNode;
    }
  }
  ~LRUCache() {
    LRUNode *curr = dummyHead;
    while (curr != nullptr) {
      LRUNode *next = curr->next;
      delete curr;
      curr = next;
    }
  }
};
