#include <iostream>
using namespace std;
int main(){
int a=10;
int b=50;
int* ptr=&a;
int* ptr1=&b;
int deff= *ptr1-*ptr;
cout<<deff;


  return 0;
}