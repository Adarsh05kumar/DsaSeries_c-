#include <iostream>
using namespace std;
int main(){
int month;
cout<<"Enter months :";
cin>>month;
switch (month)
{
case 1:case 3:case 5:case 7:case 8:case 10:case 12:

cout<<"31th days in months";
break;
case 4:case 6:case 9:case 11:
cout<<"30th days in month";
break;
case 2:
cout<<" 28 0r 29 days in month";
 
  break;

default:
cout<<"invalide value ";
  break;
}








  return 0;
}