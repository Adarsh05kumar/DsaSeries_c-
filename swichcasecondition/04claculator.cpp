#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n :";
cin>>n;
int m;
cout<<"Enter m :";
cin>>m;
char ch;
cout<<"thise are oprator (*,/,%,+,-,*) :";
cin>>ch;
switch (ch)
{
case '+':
  cout<<"sum is ::"<<n+m;
   cout<<endl;
  break;

  case '-':
  cout<<"sub is ::"<<n-m;
   cout<<endl;
  break;

  case '*':
  cout<<"mul is ::"<<n*m;
   cout<<endl;
  break;

  case '/':
  cout<<"dived is ::"<<n/m;
  cout<<endl;
  break;

  case '%':
  cout<<"mudulas is ::"<<n%m;
   cout<<endl;
  break;



default:
cout<<"use are this opratore [(*,/,%,+,-,*)]";
  break;
}




  return 0;

}