#include <iostream>
using namespace std;
int main(){
  
// 7. Basic Pointer Increment :

// Declare an integer variable x and a pointer ptr pointing to x. Increment the pointer and print the values of ptr and x. What is the result?


int x=20;
int* ptr=&x;
*ptr=++x;
cout<<x;


  return 0;
}