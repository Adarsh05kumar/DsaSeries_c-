// #include <iostream>
// using namespace std;

// void sumevenOdd(int n, int n2) {
//   int evensum=0;
//   int oddsum=0;
//   int i=n;
//   while(i<=n2){
//     if(i%2==0){
// evensum+=i;
//     }else{
//       oddsum+=i;
//     }
// i++;
//   }
//  cout<<"sum even ::"<<evensum<<endl;
//  cout<<"oddeven ::"<<oddsum;

  
// }


// int main() {
//   int n;
//   cout << "Enter N number: ";
//   cin >> n;
//    int n2;
//   cout << "Enter N number: ";
//   cin >> n2;

  
//    sumevenOdd(n,n2);
//   cout << endl;

//   return 0;
// }


// 01>> assingment01Function*****************

// 01>> 
// #include <iostream>
// using namespace std;
// string oddeven(int n){
//   if(n%2==0){
// return "even";
//   }else{
//     return "odd";
//   }

// }
// int main(){
// cout<<oddeven(11);


//   return 0;
// }


// 02>>
//  #include <iostream>
// using namespace std;
// string  largestNum(int n,int m, int p){
//   if(n>m && n>p){
//     return "n is greater ";
//   }else if(m>n&&  m>p){
//     return "m is grater ";
//   }else if(p>n && p>m){
//     return " p is grater ";
//   }

// }
// int main(){
// int n,p,m;
// cout<<"Enter n :"<<endl;
// cin>>n;
// cout<<"Enter m :"<<endl;
// cin>>m;
// cout<<"Enter p :"<<endl;
// cin>>p;

// cout<<largestNum(10,12,13);


//   return 0;
// }

// 03>> #include <iostream>
// using namespace std;
// string  PrimeNum(int n){
//   if(n<=1){cout<<"not porine";
// }
// for (int i = 2; i*i<=n; i++)
// {
//   if (n%i==0)
//   {
//     return "/not prime";
//   }
//   else {
//     return "prime";
//   }
  
// }


// }
// int main(){
// int n;
// cout<<"Enter n :"<<endl;
// cin>>n;


// cout<<PrimeNum(n);


//   return 0;
// }

// 04>> 
// #include <iostream>
// using namespace std;
// string  LeapYear(int n){
// if((n%4==0 && n%100!=0)||(n%400==0)){
//   return "This is leap year";
// }else{
//   return "Not Leap Year ";
// }
  
// }



// int main(){
// int n;
// cout<<"Enter n :"<<endl;
// cin>>n;


// cout<<LeapYear(n);


//   return 0;
// }

// 05>> 

// #include <iostream>
// using namespace std;
// string  VowelConsonant(char ch){
// if(ch=='A'||ch=='I'||ch=='E'||ch=='O'||ch=='U' ){
// return " This is capital vowel";
// }
// else if (ch=='a'||ch=='i'||ch=='o'||ch=='e'||ch=='u' ){
// return "this is Small vowel";

// }else{
//   return" this is consonant";
// }
// }
// int main(){
// char n;
// cout<<"Enter charctur:"<<endl;
// cin>>n;


// cout<<VowelConsonant(n);


//   return 0;
// }
// 06 >> #include <iostream>
// using namespace std;
// string NegaPossiZero(int n){
// if(n>0){
//   return "possitive ";
// }else if (n<0)
// {
//  return "negative";
// }else if(n==0)
// {
// return"Zero";
// }



// }
// int main(){
// int  n;
// cout<<"Enter Number :"<<endl;
// cin>>n;


// cout<<NegaPossiZero(n);


//   return 0;
// }

// 07 >> 
// #include <iostream>
// using namespace std;
// string Divisibility(int n){
// if(n%3==0 && n%5==0){
//   return "this number is diveded 3 and 5 both ";
// }else if(n%3==0){
//   return"  this number is only diveded by 3 ";
// }
// else if(n%5==0){
//   return"  this number is only diveded by 5 ";
// }




// }
// int main(){
// int  n;
// cout<<"Enter number:"<<endl;
// cin>>n;


// cout<<Divisibility(n);


//   return 0;
// }

// 08 >> 

// #include <iostream>
// using namespace std;
// string Alphabetcheck(char ch)
// {
//   if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//   {
//     return "This is Alphabetic ";
//   }
//   else
//   {
//     return " this not alphabetic";
//   }
// }
// int main()
// {
//   char n;
//   cout << "Enter charactur:" << endl;
//   cin >> n;

//   cout << Alphabetcheck(n);

//   return 0;
// }


// 09>> 
//  #include <iostream>
// using namespace std;
// string  largestNum(int n,int m){
//   if(n>m && n>p){
//     return "n is greater ";
//   }else if(m>n&&  m>p){
//     return "m is grater ";
//   }

// }
// int main(){
// int n,p,m;
// cout<<"Enter n :"<<endl;
// cin>>n;
// cout<<"Enter m :"<<endl;
// cin>>m;
// cout<<"Enter p :"<<endl;
// cin>>p;

// cout<<largestNum(10,12);


//   return 0;
// }

// 10>> #include <iostream>
// using namespace std;
// int Palimdrom(int n)
// {
//   int count = 0;
//   int reverse = 0;
//   int m = n;
//   while (n > 0)
//   {
//     int tem = n % 10;
//     reverse = reverse * 10 + tem;
//     n = n / 10;
//   }

//   if (reverse == m)
//   {
//     cout << reverse;
//     return cout << "Palimdrom",0;
//   }

//   return cout << "not",0;
// }
// int main()
// {
//   int n;
//   cout << "Enter n :" << endl;
//   cin >> n;

//   return cout << Palimdrom(n),0;
// }
//  11>> 


// #include <iostream>
// using namespace std;
// int Range(int n)
// {
//   if(n>10||n<100){
//     return cout<<"In the range of 10 to 100 ",(0);
//   }
//   else{
//     return cout<<"out of range ",0;
//   }
// }
// int main()
// {
//   int n;
//   cout << "Enter n :" << endl;
//   cin >> n;

//   return cout << Range(n),0;
// }

// 12<< 

// #include <iostream>
// using namespace std;
// int EvenoddDigit(int n)
// {
//   int evencount=0;
//   int oddcount=0;
//  while(n>0){
        
//         int digit=n%10;
//         if(n%2==0){
//           evencount++;
//         }else{
//           oddcount++;
//         }
//         n/=10;
//     }
//     cout<<"odddigit "<<oddcount<<endl;
//     cout<<"evendigit "<<evencount<<endl;
// }
// int main()
// {
//   int n;
//   cout << "Enter n :" << endl;
//   cin >> n;

//  EvenoddDigit(n);
// }


// 13<< 

// #include <iostream>
// using namespace std;
// int EvenoddDigit(int n ,int b, int c)
// {
//   if((n+b+c==180) && (n>0 && b>0 && c>0)){
//   cout<<"the trangle is valide";
// }else{
//   cout<<"the trangle is  not valide";
// }
 
// }
// int main()
// {
//   int n;
//   cout << "Enter n :" << endl;
//   cin >> n;

//   int b;
//   cout << "Enter b :" << endl;
//   cin >> b;

// int c;
//   cout << "Enter c:" << endl;
//   cin >> c;
  
  

//  EvenoddDigit(n ,b, c);
// }
