#include <iostream>
using namespace std;

int main(){
int year;
cout<<"Enter year :";
cin>>year;
 int result = (year%4==0 && year%100!=0)||(year%400==0);

switch (result)
{
case 1:
 cout<<"leap year";
  break;

default:
 cout<<"leap year is not";
  break;
}













  return 0;
}