#include <iostream>
using namespace std;

void changeValue(int &x ,int &y) {
    x = 20; 
    y=10;
}

int main() {
    int x = 10;
    int y=20;
    cout << "Before: x = " << x << endl;
 cout << "Before: y = " << y << endl;
    changeValue(x ,y); 

    cout << "After: x = " << x << endl; 
     cout << "after: y = " << y << endl;
    return 0;
}
