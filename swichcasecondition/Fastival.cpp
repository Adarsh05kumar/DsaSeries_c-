#include <iostream>
using namespace std;
int main(){
  int choice;
  cout<<"Enter choice fav fastival ";
  cin>>choice;
  switch (choice)
  {
  case 1:
    cout<<"Gandhijayanti";
    break;

     case 2:
    cout<<"Holi";
    break;
  

    case 3:
    cout<<"rakshabandhan";
    break;


      case 4:
    cout<<"Diwali";
    break;

      case 5:
    cout<<"makarsankranti";
    break;

     
    break;
  default:
  cout<<"invalide value";
    break;
  }
}