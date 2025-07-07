1. Simple Ternary Operator:


1. 
=> Problem: Evaluate the following expression:
int a = 10, b = 5;
int result = (a > b) ? a : b;
Question: What is the value of result?

=> int result = (a > b) ? a : b;
=> int result= (10>5)?10:5;
=> result=10;





2.=>  Nested Ternary Operator:

Problem: Evaluate the following expression:
int a = 10, b = 5, c = 15;
int result = (a > b) ? (a > c ? a : c) : b;
Question: What is the value of result?

=> result =(10>5)? (10>5 ? 10:15):5;
=> result =(10>5)? 15:5;
=> result=15;



=>3. Ternary with Arithmetic:

Problem: Evaluate the following expression:
int a = 10, b = 20;
int result = (a + b > 25) ? (a * b) : (a - b);
Question: What is the value of result? 

=> result =(10+20 >25) ? (10 * 20) : (10 - 20);
=> result =(30 > 25) ? 10*20;
=> result => 200;


=> 4. Ternary with Assignment:

Problem: Evaluate the following expression:
int a = 5, b = 10;
int max = (a > b) ? a : b;
Question: What is the value of max?

=> max=(5 > 10) ? 5 : 10:
=> max= 10;



=> 5. Ternary with Logical Operators:

Problem: Evaluate the following expression:
int a = 10, b = 20;
bool result = (a < b) ? (b > 15) : false;
Question: What is the value of result?


=> result =(10 < 20 ) ?(20>15) :false;
=> result =(10<20) ? false;
=> result =false;



=> 6. Ternary with Relational and Logical Operators:

Problem: Evaluate the following expression:
int a = 5, b = 10, c = 15;
int result = (a > b && b < c) ? b : c;
Question: What is the value of result?


=> result = (5>10 && 10<15) ? 10 :15;
=> result =15;




7.
=>7. Ternary with Parentheses:

Problem: Evaluate the following expression :
int a = 10, b = 5;
int result = ((a > b) ? a : b) + 5;
Question: What is the value of result?


result =((10>5) ? 10 : 5) +5;
result =10+5;
result =15;





=> 8. Ternary with Modulo:

Problem: Evaluate the following expression:
int a = 20;
int result = (a % 2 == 0) ? a / 2 : a * 2;
Question: What is the value of result?


=> result = (20 %2 == 0) ? 20/2 :20*2;
=> result=10;



=> 
9. Ternary with Negation:

Problem: Evaluate the following expression:

int a = -5, b = 10;
int result = (a < 0) ? -a : b;
Question: What is the value of result?


result =(-5<0) ? -(-5) :10;
result = 5;


=> 10. Ternary with Logical NOT:

Problem: Evaluate the following expression:
int a = 10;
bool result = !(a > 15) ? true : false;
Question: What is the value of result?

 
=> result =!(10>15) ? true : false ;
=> result =true;


=> 11. Ternary with Bitwise Operators:

Problem: Evaluate the following expression:
int a = 6, b = 3;
int result = (a & b) ? (a | b) : (a ^ b);
Question: What is the value of result?

=> result =(6 & 3) ? (6|3) :6^3;
=> result =(a = 6 → 0110 ,b = 3 → 0011) ? (a | b = 0110 | 0011 = 0111 ): a^b;
=> result = 2 ?



=> 12. Chained Ternary with Variables:

Problem: Evaluate the following expression:
int a = 5, b = 10, c = 15;
int result = (a > b) ? a : (b > c ? b : c);

=> result =(5>10) ? 5:(10> 15 ? 10:15);
=> result =(5>10) ? 5:15;
=> result =15;



13. Ternary with Division:

Problem: Evaluate the following expression:
int a = 10, b = 5;
int result = (a % b == 0) ? (a / b) : (b / a);


=> result = (10% 5==0) ? (10/5) : (5/10);
=> result =10/5;
=> result =2;



14. Ternary with Relational Precedence:

Problem: Evaluate the following expression:
int a = 5, b = 3;
int result = a > b ? a * 2 : b * 3;


=> result = 5>3 ? 5*2 : 3*3;
=> result =5*2;
=> result =10;



=> 15. Ternary with Assignment Precedence:

Problem: Evaluate the following expression:
int a = 10, b = 20;
int c = 0;
c = (a > b) ? a : b;

c=(10>20)? 10:20;
c=20;

=> 
16. Ternary with Boolean Expression:

Problem: Evaluate the following expression:
int a = 5, b = 10;
bool result = (a < b) ? true : false;

=> result = (5<10) ?true : false ;
=> result =false;



=> 17. Ternary with Mixed Conditions:

Problem: Evaluate the following expression:
int a = 8, b = 12, c = 6;
int result = (a > b) ? a : ((b > c) ? b : c);

=> result =(8>12) ? 8 :((12> 6)? 12:6);
=> result =(8>12) ? 8 :12;
=> result= 12;



=> 18. Complex Nested Ternary:

Problem: Evaluate the following expression:
int a = 10, b = 20, c = 5;
int result = (a < b) ? (b < c ? c : b) : a;

=> result =(10<20) ? (20 < 5? 5:20):10;
=> result =(10<20) ? 5:10;
=>result =10;


=> 19. Ternary with Short-Circuiting:

Problem: Evaluate the following expression:
int a = 5, b = 10;
int result = (a > b) ? a : b - 5;


=> result =(5>10) ? 5 : 10-5;
=> result =10-5;
=> result =5;




=> 20. Ternary with Equality:

Problem: Evaluate the following expression:
int a = 10, b = 10;
int result = (a == b) ? 1 : 0;

=> result =(10==10) ?1:0;
=> result =1;




