#include <iostream>
using namespace std;

int topIndex = -1;
int stack[4]; // 0,0,0,0

int push(int data) {
  if (topIndex <= 2) {
    topIndex++;
    stack[topIndex] = data;
    return data;
  } else {
    cout << "Can not insert at this position where current index is "
         << topIndex << endl;
    return -1;
  }
}

int peek() {
  if (topIndex <= 3 && topIndex > -1) {
    return stack[topIndex];
  } else {
    cout << "Invalid Range";
    return -1;
  }
}

int pop() { 
  // valid 
  if (topIndex <= 3 && topIndex > -1) {
  int result = stack[topIndex];
  topIndex--;
  return result;
  }else{
      cout << "Invalid Range";
        return -1;
  }
}
int main() {
  push(23);// -1 
  cout<<pop()<<endl;
  cout << pop()<<endl;
}