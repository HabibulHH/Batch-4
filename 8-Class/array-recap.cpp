#include <iostream>
using namespace std;

int main() {
  float marks[5];
  marks [0] = 90;
  marks[1]= 89.90;
  marks[2]= 39.90;
  marks[3]= 19.90;
  marks[4] = 76;
  
int sum;
  sum = marks [0] + marks [1] + marks[2] + marks[3] + marks[4];

  int sumForLoop; 
  for(int i = 0; i < 5; i++){
    sumForLoop = sumForLoop + marks[i];
  }
  cout << sum << endl;
  cout<< sumForLoop << endl;
}