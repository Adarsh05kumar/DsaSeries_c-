#include <iostream>
using namespace std;
int main(){
int value ,result;
cout<<"Value converter !! : ";
cin>>value;
int choice;
   cout << "\nSelect Conversion Type:\n";
    cout << "1. Grams to Kilograms\n";
    cout << "2. Kilograms to Grams\n";
    cout << "3. Meters to Kilometers\n";
    cout << "4. Kilometers to Meters\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;
switch (choice)
{
case 1:
 result= value/1000;
 cout<< value <<"gram ="<<result<<"kilograms"<<endl;;
  break;
 case 2:
 result =value*1000;
 cout<< value << "kilograms ="<< result<<"grams "<<endl;

  case 3:
 result =value/1000;
 cout<< value << "meters="<< result<<"kilomitter"<<endl;;
 
  case 4:
 result =value*1000;
 cout<< value << "kilometters ="<< result<<"meters" <<endl;
 
default:
 cout << "Enter your choice (1-4): ";
  break;
}


















  return 0;
}