#include <iostream>
using namespace std;

int topIndex = -1;
int length = 3;
int stack[2]; // 0,0,0,0

int push(int data) {
  if (topIndex <  length-1) {
    topIndex++;
    stack[topIndex] = data;
    return data;
  } else {
    cout << "Can not insert at this position where current index is"
         << topIndex << endl;
    return -1;
  }
}

int peek() {
  if (topIndex < length-1 && topIndex > -1) {
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
  cout<<topIndex<<endl;
  push(233);// -1 
  cout<<topIndex<<endl;
  push(2334);// -1 
  cout<<topIndex<<endl;
  push(23);// -1 
  cout<<topIndex<<endl;
 
}