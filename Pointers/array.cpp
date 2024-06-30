#include <iostream>
using namespace std;

int main() {
  int arr[3] = {12,3,4};
  int* ptr;
  ptr = &arr[0];
    
  cout<< ptr<<endl;
  cout<< *ptr<<endl;
  cout<<"................. \n";
  ptr++;
  cout<< ptr<<endl;
  cout<< *ptr;
    ptr++;
    cout<< ptr<<endl;
    cout<< *ptr;
    ptr++;
    cout<< ptr<<endl;
    cout<< *ptr;
    ptr++;
    cout<< ptr<<endl;
    cout<< *ptr;
}
