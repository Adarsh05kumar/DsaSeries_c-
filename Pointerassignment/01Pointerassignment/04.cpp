#include <iostream>
using namespace std;
int main(){
  
// 6. Change the value of a variable using a pointer

// Task: Modify the value of a variable using a pointer.
// Input: int a = 10; int* ptr = &a;
// Output: New value of a: 20


int a=10;
int *ptr=&a;
*ptr=20;
cout<<"change value by ptr :"<<a<<endl;


  return 0;
}