#include <iostream>
using namespace std;
int main()
{

  int value1;
  cout << "Enter a value ";
  cin >> value1;
  int value2;
  cout << "Enter a value ";
  cin >> value2;
  int value3;
  cout << "Enter a value ";
  cin >> value3;
  int result =value1 + value2 + value3 ;
  switch (result)
  {
  case 180:

  
      cout << "tranlge shape ban rha ha !!:)";
    

    break;

  default:
    cout << "change value and try again";
    break;
  }

  return 0;
}