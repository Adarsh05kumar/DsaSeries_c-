#include <iostream>
using namespace std;
int main(){
  int currency;
  cout<<"Enter value ";
  cin>>currency;
  switch (currency)
  {
  case 10:
    cout<<"ten ruppe";
    break;

     case 20:
    cout<<"twenty";
    break;
  

    case 50:
    cout<<"fivty";
    break;


      case 100:
    cout<<"hundred";
    break;

      case 500:
    cout<<"five hundred";
    break;

      case 1000:
    cout<<"onethousand";
    break;
  default:
    break;
  }
}