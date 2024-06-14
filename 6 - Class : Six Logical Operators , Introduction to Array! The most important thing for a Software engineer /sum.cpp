#include <iostream>
using namespace std;
float pi =90.90;
string answerfmt = "Your Result is ";

// reachable ?
// all work of main you can do here 
int sum (int a, int b) {
  int sum = a + b;
   //return  a + b;
  return sum;
}

int sub (int a, int b) {
  int sub = a - b;
   //return  a + b;
  return sub;
}

// assign 10000000000 
int mul (int a, int b) {
  int mul = a - b;
   //return  a + b;
  return mul;
}

int division (int a, int b) {
  int division = a / b;
   //return  a + b;
  return division;
}

void printer(int value){
  cout<<"Your result is "<< value;
}

int main() {
  int result = sum(1342,12000); // call korte hobe 
  //cout << result + 90;
  printer(result);
  // re process 
  int sub_result = sub(result,200);
  printer(sub_result);
  
  printer(mul(sub_result , 900));

  return 0;
}