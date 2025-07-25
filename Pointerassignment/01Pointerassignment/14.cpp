#include <iostream>
using namespace std;

int main()
{
  int num = 10;
  int num2 = 20;
  int *ptr = &num;
  int *ptr1 = &num2;

  if (*ptr == *ptr1)
  {
    cout << "num == num2";
  }
  else
  {
    cout << "num != num2";
  }

  return 0;
}
