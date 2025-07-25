#include <iostream>
using namespace std;
int main(){

// Task: Use the address-of operator to print the address of a variable.
int num=10;
int *p=&num;
cout<<"Addres of num : "<<&num<<endl;
cout<<"memory addres :"<<*p;

  return 0;
}