#ifndef NODE_H
#define NODE_H

template<typename NODETYPE> class LinkedList;
template<typename NODETYPE>
class Node {
friend class LinkedList<NODETYPE>;

public:
  Node(const NODETYPE &info) : data(info), nextPtr(nullptr) {}
  NODETYPE getData() const {
    return data;
  }

private:
  NODETYPE data;
  Node<NODETYPE> *nextPtr;
};
#endif
