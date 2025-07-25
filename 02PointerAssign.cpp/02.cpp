#include <iostream>
using namespace std;
int main(){

  int a=90;
  int *ptr=&a;
  int **ptr2=&ptr;
  int ***ptr3=&ptr2;
  ***ptr3=100;
  cout<<***ptr3;


  return 0;
}