#include <iostream>
using namespace std;
int main(){
  
// 2. Pointer initialization with address-of operator
// Task: Initialize a pointer with the address of a variable and print the value it points to.
int num=20;
int*p=&num;
cout<<"Value point by p:"<<*p;

  return 0;
}