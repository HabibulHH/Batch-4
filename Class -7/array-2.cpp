#include <iostream>
using namespace std;


float avg(){
  // 100 avg
  // store marks of 100 students 
  int studentsMarks[10];
   studentsMarks[0] = 89;
   studentsMarks[1] = 80;
   studentsMarks[2] = 8;
   studentsMarks[3] = 60;
   studentsMarks[4] = 78;
   studentsMarks[5] = 89;
   studentsMarks[6] = 89;
   studentsMarks[7] = 30;
   studentsMarks[8] = 40;
   studentsMarks[9] = 50;
  // access 

  int sum = 0;
  for(int count = 0; count < 10; count++){
      //cout<<studentsMarks[count]<<endl;
      sum = sum + studentsMarks[count];
  }
  return  sum/10;
}

int main() {
  cout<< avg();
}