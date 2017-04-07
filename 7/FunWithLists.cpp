#include <iostream>
#include <list>
using namespace std;

class FunWithLists {
  public:
    FunWithLists();
    FunWithLists(unsigned int  n);
    int getValue();
    void plus(FunWithLists);
    void times(FunWithLists y);
    void incr();
    void decr();
  private:
    list<int> theList;
};

FunWithLists::FunWithLists() {
//  list<int> theList;
}

void FunWithLists::incr() {
  theList.push_front(0);
  cout << " --> incr() called" << endl;
}

void FunWithLists::decr() {
  theList.pop_front();
  cout << " --> decr() called" << endl;
}

FunWithLists::FunWithLists(unsigned int n) {
  cout << " --> constructor called, value " << n << endl;
  if (n ==  0){
    FunWithLists();
  } else{
    FunWithLists(n-1);
  }
}

int FunWithLists::getValue() {
  return theList.size();
}

void FunWithLists::plus(FunWithLists k){
  if (k.getValue() == 0) {
    return;
  } else {
      this -> incr();
      k.decr();
      this -> plus(k);
    }
}

void FunWithLists::times(FunWithLists k){
  if (k.getValue() == 0){
    return;
  } else if (k.getValue() == 1){
    return;
  } else {
      plus(&j);
      k.decr();
  }
}

int main() {
  FunWithLists l;
  l.incr();
  l.incr();
  l.incr();
  l.incr();
  l.incr();
  l.incr();
  cout << l.getValue() << endl;
  FunWithLists k;
  k.incr();
  k.incr();
  cout << k.getValue() << endl;
  l.times(k);
  cout << l.getValue() << endl;
}
