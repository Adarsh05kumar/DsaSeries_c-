#include <iostream>
using namespace std;

int main(){
char ch;
cout<<"Enter your corospond:";
cin>>ch;
switch (ch)
{
case 'A':
cout<<"A corresponds to Excellent";
  break;
case 'B':
cout<<"B corresponds to Good";
  break;
 case 'C':
cout<<"C corresponds to Avrage";
  break;
case 'D':
cout<<"D corresponds to Blowe Avrage";
  break;

  case 'E':
cout<<"E corresponds to Fail";
  break;

default:
cout<<"limits are this[A,B,C,D,E,] ";
  break;
}
























  

  return 0;
}