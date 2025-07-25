#include <iostream>
using namespace std;
int main(){
int* ptr = new int;    
*ptr = 10;         

delete ptr;       
cout << *ptr; 

  return 0;
}