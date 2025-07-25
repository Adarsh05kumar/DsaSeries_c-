#include <iostream>
using namespace std;
int main(){


// 11. Pointer Arithmetic with Multiple Variables :

// Create three integer variables a, b, and c. Declare a pointer ptr and use pointer arithmetic to set it first to point to a, then to b, and finally to c. Print the values pointed to by the pointer. 


int x=20;
int y=30;
int* ptr=&x;
int* ptr1=&y;
int multy=*ptr * *ptr1;
cout<<multy;


  return 0;
}