#include<iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a number: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "B.Tech";
            break;
        case 2:
            cout << "M.Tech";
            break;
        case 3:
            cout << "Ph.D";
            break;
        case 4:
            cout << "MBA";
            break;
        default:
            cout << "Invalid input";
    }

    return 0;
}
