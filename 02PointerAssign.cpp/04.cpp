#include <iostream>
using namespace std;

int main() {

    int* leakPtr = new int(10);  


    int* ptr1 = NULL;
    if (ptr1 == NULL) {
        cout << "ptr1 is NULL (old style)" << endl;
    }


    int* ptr2 = nullptr;
    if (ptr2 == nullptr) {
        cout << "ptr2 is nullptr (modern C++ style)" << endl;
    }

    return 0;
}
