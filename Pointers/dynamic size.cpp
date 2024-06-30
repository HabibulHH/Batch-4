#include <iostream>
using namespace std;

int main() {
    int size;
    cout<<"Please enter arr size\n";
    cin>>size;
    cout<<"Your array size is "<<size<<endl;

    int* arr;
    arr = new int[size];
    ///
    arr[0]=12;
    arr[1]=34;
    arr[2] =90;
    ////
    cout<<*arr<<endl;
    arr++;
    cout<<*arr<<endl;
    arr++;
    cout<<*arr<<endl;
}
