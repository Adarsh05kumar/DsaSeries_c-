#include <iostream>
using namespace std;

void changeValue(int* ptr) {
    *ptr = 50; 
}

int main() {
    int x = 10;
    cout << "Before: x = " << x << endl;

    changeValue(&x); 

    cout << "After: x = " << x << endl; 
    return 0;
}
