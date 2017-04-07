#include <iostream>
using namespace std;

class ArrayQueue {
	public:
void push (int x) {
  data[queueSize] = x;
  queueSize++;
  trueSize ++;
}

int top () {
  return data[trueSize - queueSize];
}

void pop() {
  if (queueSize == 0){
    return;
  } else {
    queueSize--;
  }
}

int size(){
  return queueSize;
}
	private:
		int data[500];
    int trueSize = 0;
		int queueSize = 0;
};

void getTop(ArrayQueue *as){
  if (as -> size() > 0){
    cout << "top is " << as -> top() << endl;
  } else {
    std::cout << "No elements on the stack" << '\n';
  }
}

int main() {
	ArrayQueue as;
	as.push(1);
	cout << "pushed 1" << endl;
	as.push(2);
	cout << "pushed 2" << endl;
	as.push(3);
	cout << "pushed 3" << endl;
	getTop(&as);
  as.pop();
  as.pop();
  getTop(&as);
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
	return 0;
}
