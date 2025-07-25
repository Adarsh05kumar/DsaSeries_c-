#include <iostream>
using namespace std;

void passByValue(int x) {
    x = 100;  
}


void passByReference(int &x) {
    x = 100; 
}


void passByAddress(int* ptr) {
    *ptr = 100; 
}
int main() {
    int a = 5;
    int b = 10;
    int c = 15;

   
    passByValue(a);
    cout << "After Pass by Value: a = " << a << endl;  

 
    passByReference(b);
    cout << "After Pass by Reference: b = " << b << endl; 

 
    passByAddress(&c);
    cout << "After Pass by Address: c = " << c << endl;  

    return 0;
}
