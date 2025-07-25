#include <iostream>
using namespace std;

void changeValue(int &num) {
    num = 20; 
}

int main() {
    int x = 10;
    changeValue(x);   
    cout << "x = " << x << endl; 
    return 0;
}
