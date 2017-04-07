#include <iostream>
#include <utility>
using namespace std;

class LinkedStack {
	public:

void push(int x) {
 LinkedStack* newNode = new LinkedStack();
 newNode->value = x;
 newNode->next = this->next;
 this->next = newNode;
 this -> queueSize += 1;
 if (this->first == NULL){
   this->first = newNode;
 }
}

int top() {
    return this->first->value;
}
void pop() {
if (queueSize > 0){
 LinkedStack* temp = this->first;
 LinkedStack* traverse = this->next;
 int a = queueSize;
 while (a > 1) {
   traverse = traverse -> next;
   a -= 1;
   std::cout << traverse  -> value << '\n';
 }
 delete(temp);
 this->first = traverse;
 queueSize -= 1;
 } else {
   std::cout << "No elements on the stack" << '\n';
 }
}

int size(){
  return queueSize;
}


private:
 LinkedStack* next = NULL;
 LinkedStack* first = NULL;
 int queueSize = 0;
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
  ls.push(4);
	cout << "pushed 4" << endl;
	ls.push(5);
	cout << "pushed 5" << endl;
	ls.push(6);
	cout << "pushed 6" << endl;
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
