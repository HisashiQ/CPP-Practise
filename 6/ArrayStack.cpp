#include <iostream>
using namespace std;

class ArrayStack {
	public:
void push (int x) {
  data[stackSize] = x;
  stackSize++;
}

int top () {
  return data[stackSize - 1];
}

void pop() {
  if (stackSize == 0){
    return;
  } else {
    stackSize--;
  }
}

int size(){
  return stackSize;
}
	private:
		int data[500];
		int stackSize = 0;
};

void getTop(ArrayStack *as){
  if (as -> size() > 0){
    cout << "top is " << as -> top() << endl;
  } else {
    std::cout << "No elements on the stack" << '\n';
  }
}

int main() {
	ArrayStack as;
	as.push(1);
	cout << "pushed 1" << endl;
	as.push(2);
	cout << "pushed 2" << endl;
	as.push(3);
	cout << "pushed 3" << endl;
	getTop(&as);
  as.pop();
  getTop(&as);
  as.pop();
  getTop(&as);
  as.pop();
  getTop(&as);
  as.pop();
  getTop(&as);
  as.pop();
  getTop(&as);
  as.pop();
  getTop(&as);
  as.pop();
  getTop(&as);
  as.pop();
  getTop(&as);
  as.pop();
  getTop(&as);
  as.pop();
  getTop(&as);
  as.pop();
  getTop(&as);
  as.pop();
  getTop(&as);
  as.pop();
	return 0;
}
