// #include <iostream>
// using namespace std;
// int main(){
// // 1. Print numbers from 1 to N: Write a program to print numbers from 1 to a given number N.
// // int i=1;
// // int n=10;
// // // while(i<=10){
// // //   cout<<" " << i;
// // //   i++;
// // // }

// // 2. Sum of first N natural numbers: Calculate the sum of the first N natural numbers using a loop.

// // int i=1;
// // int n=10;
// // int sum=0;
// // while(i<=10){
// //   sum=sum+i;
// //   cout<<" "<<sum;
// //   i++;
// // }

// // 3. Print multiplication table: Print the multiplication table for a number 𝑁.

// // int i=1;
// // int n=5;
// // int multy=1;
// // while(i<=10){
// //   multy=n*i;
// //   cout<<" "<<multy;
// //   i++;

// // }

// // 4. Reverse printing: Print numbers from N down to 1.

// // int i=10;
// // int n=1;
// // while(i>=1){
// //   cout<<" "<<i;
// //   i--;
// // }
// // 5. Reverse a number: Reverse the digits of a number N.

// //  int n,rem,reverse=0;
// //     int len ,i;
// //     int count=0;
// //     printf("enter n :");
// //     scanf("%d",&n);
// //     while(n > 0){
// //         rem=n%10;
// //         reverse=reverse*10+rem;
// //         n=n/10;
// //         count++;
// //     }
// //     cout<<reverse<<endl;
// //     cout<<count;

// //

//     return 0;
//   }

#include <iostream>
// #include <cmath>
using namespace std;

int main()
{
  int a, b;
  cout << "Enter base a: ";
  cin >> a;
  cout << "Enter exponent b : ";
  cin >> b;

  int pow= 1;
  while (b!=0 ) {
      pow = pow*a;
     
      b--;
  }
  cout<<pow;

  // 8. Sum of digits: Find the sum of all digits in a number 𝑁.

  // int a;
  // cout << "Enter base (a): ";
  // cin >> a;
  // int count = 0;
  // int sum = 0;
  // while (a > 0)
  // {
  //   int digit = a % 10;
  //   sum += digit;
  //   a = a / 10;
  //   count++;
  // }
  // cout << "the sum of digits :" << sum << endl;
  // cout << count;

  return 0;
}
