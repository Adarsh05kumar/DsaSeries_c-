#include <iostream>
using namespace std;
int main(){

  int num=10;
  int *ptr=&num;
  *ptr=10+num;
  cout<<*ptr;
  return 0;
}