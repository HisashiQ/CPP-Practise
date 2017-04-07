#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include "Node.h" // Node class definition
template<typename NODETYPE>
class LinkedList {
public:
  LinkedList() : firstPtr(nullptr), lastPtr(nullptr) {}
  ~LinkedList() {
    if (!isEmpty()) {
      Node<NODETYPE> *currentPtr = firstPtr;
      Node<NODETYPE> *tempPtr;
      while (currentPtr != nullptr) {
        tempPtr = currentPtr;
        currentPtr = currentPtr->nextPtr;
        delete tempPtr;
      }
    }
  }

  void insertAtFront(const NODETYPE &value) {
    Node<NODETYPE> *newPtr = getNewNode(value); // new node
    if (isEmpty())
    firstPtr = lastPtr = newPtr; // new list has only one node
    else {
      newPtr->nextPtr = firstPtr; // point new node to old 1st node
      firstPtr = newPtr; // aim firstPtr at new node
    }
  }
  /* insert node at back of list */
  void insertAtBack(const NODETYPE &value) {
    Node<NODETYPE> *newPtr = getNewNode(value); // new node
    if (isEmpty())
    firstPtr = lastPtr = newPtr; // new list has only one node
    else {
      lastPtr->nextPtr = newPtr; // update previous last node
      lastPtr = newPtr; // new last node
    }
  }

  bool removeFromFront(NODETYPE &value) {
    if (isEmpty())
    return false; // delete unsuccessful
    else {
      Node<NODETYPE> *tempPtr = firstPtr; // hold item to delete
      if (firstPtr == lastPtr)
      firstPtr = lastPtr = nullptr; // no nodes remain after removal
      else
      firstPtr = firstPtr->nextPtr; // point to previous 2nd node
      value = tempPtr->data; // return data being removed
      delete tempPtr; // reclaim previous front node
      return true; // delete successful
    }
  }


  bool removeFromBack(NODETYPE &value) {
    if (isEmpty())
    return false; // delete unsuccessful
    else {
      Node<NODETYPE> *tempPtr = lastPtr; // hold item to delete
      if (firstPtr == lastPtr) // List has one element
      firstPtr = lastPtr = nullptr; // no nodes remain after removal
      else {
        Node<NODETYPE> *currentPtr = firstPtr;
        /* locate second-to-last element */
        while (currentPtr->nextPtr != lastPtr)
        currentPtr = currentPtr->nextPtr; // move to next node
        lastPtr = currentPtr; // remove last node
        currentPtr->nextPtr = nullptr; // this is now the last node
      }
      value = tempPtr->data; // return value from old last node
      delete tempPtr; // reclaim former last node
      return true; // delete successful
    }
  }

  bool isEmpty() const {
    return firstPtr == nullptr;
  }
  /* display contents of List */
  void print() const {
    if (isEmpty()) {
      std::cout << "The list is empty\n\n";
      return;
    }
    Node<NODETYPE> *currentPtr = firstPtr;
    std::cout << "The list is: ";
    while (currentPtr != nullptr) {
      std::cout << currentPtr->data << ' ';
      currentPtr = currentPtr->nextPtr;
    }
    std::cout << "\n\n";
  }

  void concat(LinkedList *otherList){
    while(!otherList -> isEmpty()){
      this -> insertAtBack(otherList -> firstPtr -> data);
      otherList -> removeFromFront(otherList -> firstPtr -> data);
    }
  }

private:
  Node<NODETYPE> *firstPtr; // pointer to first node
  Node<NODETYPE> *lastPtr; // pointer to last node
  /* utility function to allocate new node */
  Node<NODETYPE> *getNewNode(const NODETYPE &value) {
    return new Node<NODETYPE>(value);
  }
};
#endif /* LIST_H_ */
