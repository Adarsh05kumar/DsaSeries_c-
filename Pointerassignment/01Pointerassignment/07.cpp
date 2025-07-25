#include <iostream>
#include <typeinfo>  // Required for typeid
using namespace std;

int main() {
    int i = 9;
    int* ptr;

    cout << typeid(ptr).name();  

    return 0;
}
 