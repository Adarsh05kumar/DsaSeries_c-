#include <iostream>
using namespace std;
int main(){
 char ch;
 cout<<"singnal rule :";
 cin>>ch;
 switch (ch)
 {
  //  g==green 
 case 'g':
cout<<"GO";
  break;
 //  r==red 
   case 'r':
cout<<"Stop";
  break;
//  y==wait; 
   case 'y':
cout<<"Waite";
  break;
 default:
 cout<<"invalide singnal";
  break;
 }









  return 0;
}