#include <iostream>
using namespace std;

int main()
{
  int num = 10;
  int num2 = 20;
  int *ptr = &num;
  int *ptr1 = &num2;
int add =*ptr1+ *ptr;
int sub=*ptr1 - *ptr;
cout<<"add pointer "<<add <<endl;
cout<<"sub pointer "<<sub;


  return 0;
}
