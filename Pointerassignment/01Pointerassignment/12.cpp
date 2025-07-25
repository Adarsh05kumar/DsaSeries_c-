#include <iostream>
using namespace std;

int main() {
    char ch = 'a';
    char* ptr = &ch;

    ptr++; 

    cout << "Pointer address after increment: " << (void*)ptr << endl;
    cout << "Value of ch: " << ch << endl;

    return 0;
}
