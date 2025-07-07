1. Simple Assignment:

=> int a;
=> a = 5;
=> a=5;
 

2. Chained Assignment:

 => Problem: Evaluate the following expression:
=> int a, b, c;
=> a = b = c = 10;

=> 	a=10;
=>      b=10;
=>      c=10;


=> 3. Assignment with Addition:

Problem: Evaluate the following expression:
int a = 5;
a += 3;
Question: What is the value of a?


=> a=a+3;
=> a=5+3;
=> a=8;



=> 4. Assignment with Multiplication:

Problem: Evaluate the following expression:
int a = 4;
a *= 2 + 3;
Question: What is the value of a?
(Remember operator precedence: + before *=.)



=> a= a*2+3;
=> a=4*2+3;
=> a=8+3;
=> a=11;


=>
5. Assignment with Modulo:

Problem: Evaluate the following expression:
int a = 10;
a %= 4;
Question: What is the value of a?


=> a=a%4;
=> a=10%4;
=> a=2;




=> 6. Chained Assignment with Expressions:

Problem: Evaluate the following expression:
int a, b=10;
a = (b += 5) + 2;
Question: What are the values of a?



=> a= (b=b+5) +2;
=> a=(b=10+5)+2;
=> a=(b=15)+2;
=> a=b;
=> a=15+2;
=> a=17;


=> 7. Assignment with Division:

Problem: Evaluate the following expression:
int a = 20;
a /= 4;
Question: What is the value of a?

=> a=a/4;
=> a=20/4;
=> a=5;



=> 8. Compound Assignment in Complex Expression:

Problem: Evaluate the following expression:
int a = 10;
a += 5 * 2;
Question: What is the value of a?
(Precedence: * before +=.)


=> a=a+5*2;
=> a=10+5*2;
=> a=20;


=> 9. Assignment with Logical Operators:

Problem: Evaluate the following expression:
int a = 5, b = 3;
a = a > b && b < 5;
Question: What is the value of a?


=> a= a> && b < 5;
=> a= 5>3 && 3<5;
=> a=1&&1;
=> a=1;


=> 10. Multiple Compound Assignments:

Problem: Evaluate the following expression:
int a = 10, b = 5;
a -= b += 2;
Question: What are the values of a and b?
(Work inside out: b += 2 is evaluated first.)


=> a=a-=b=b+=2;
=> a=10-=b=5+=2;
=> a=10 -b=7;
=> a=10-7;
=> a=3;


=> 11. Assignment with Parentheses:

Problem: Evaluate the following expression:
int a;
a = (5 + 3) * 2;
Question: What is the value of a?
=> a=(5+3)*2;
=> a=(10+6);
=> a=16;

=> 12. Relational and Assignment Together:

Problem: Evaluate the following expression:
int a = 10;
a = a > 5;
Question: What is the value of a?

=> a=10>5;
=> a=1;


=> 13. Logical OR with Assignment:

Problem: Evaluate the following expression:
int a = 5;
a = a || 0;
Question: What is the value of a?

=> a=5||0;
=> a=1;



=> 14. Assignment with Bitwise AND:

Problem: Evaluate the following expression:
int a = 7;
a &= 3;
Question: What is the value of a?


=> 15. Complex Assignment Expression:

Problem: Evaluate the following expression:
int a = 10, b = 20, c = 0;
c = (a += b) - (b /= 2);
Question: What are the values of a, b, and c?

=> c=(a=10=20)-(b=b/2);
=> c=(a=30)-(b=10);
=> c=30-10;
=> c=20;



=> 16. Assignment with Negation:

Problem: Evaluate the following expression:
int a = 5;
a = -a;
Question: What is the value of a?

=> a=-5;
=> a=-5;

=> 17. Chaining with Arithmetic Operations:

Problem: Evaluate the following expression:
int a = 2, b = 4;
a *= b += 3;
Question: What are the values of a and b?


=> a=a*b=b+3;
=> a=a*b=4+3;
=> a=2*7;
=> a=14;




=> 18. Assignment with Precedence:

Problem: Evaluate the following expression:
int a = 5;
a = a + 2 * 3;
Question: What is the value of a?
(Precedence:


=> a=a+2*3;
=> a=a+6;
=> a=5+6;
=> a=11;


=>
19. Relational and Assignment Combined:

Problem: Evaluate the following expression:
int a = 5, b = 3;
a = (a < b) + 1;
Question: What is the value of a?


=> a=(5<3)+1;
=> a=0+1;
=> a=1;


=> 20. Compound Assignment Chaining:

Problem: Evaluate the following expression:
int a = 8;
a += a -= a *= 2;
Question: What is the value of a?

=> a+=a -=a=a*2;
=> a+=a -=16;
=> a+=(-8);
=> a=8-8;
=> a=0;