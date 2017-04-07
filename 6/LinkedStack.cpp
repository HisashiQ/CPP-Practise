#include <iostream>
#include <utility>
using namespace std;

class LinkedStack {
	public:

void push(int x) {
 LinkedStack* newNode = new LinkedStack();
 newNode->value = x;
 newNode->next = this->next;
 this->next =  newNode;
 this -> stackSize += 1;
}

int top() {
    return this->next->value;
}
void pop() {
if (stackSize > 0){
 LinkedStack* temp = this->next;
 this->next = this->next->next;
 delete(temp);
 stackSize -= 1;
 } else {
   std::cout << "No elements on the stack" << '\n';
 }

}

int size(){
  return stackSize;
}


private:
 LinkedStack* next = NULL;
 int stackSize = 0;
 int value = 0;
 int count = 0;
};

void getTop(LinkedStack *ls){
  if (ls -> size() > 0){
    cout << "top is " << ls -> top() << endl;
  }
}
int main() {
	LinkedStack ls;
	ls.push(1);
	cout << "pushed 1" << endl;
	ls.push(2);
	cout << "pushed 2" << endl;
	ls.push(3);
	cout << "pushed 3" << endl;
  getTop(&ls);
  ls.pop();
  getTop(&ls);
  ls.pop();
  getTop(&ls);
  ls.pop();
  getTop(&ls);
  ls.pop();
  getTop(&ls);
  ls.pop();
  getTop(&ls);
  ls.pop();

	return 0;
}
