#include <iostream>
using namespace std;
int main(){
// 8. Pointer Arithmetic with Simple Variables :

// Declare two integer variables a and b. Declare a pointer that points to a. Use pointer arithmetic to set the value of b to be the sum of a and b using ptr


int a=10;
int b=90;
int* ptr=&a;
int* ptr1=&b;
* ptr1= *ptr + *ptr1;
cout<<b <<endl;

cout<<a;


  return 0;
}