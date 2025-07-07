#include<iostream>
using namespace std;

int main() {
    int planetNumber;
    cout << "Enter planet number (1-8): ";
    cin >> planetNumber;

    switch(planetNumber) {
        case 1:
            cout << "Mercury is the smallest planet " << endl;
            break;
        case 2:
            cout << "Venus" << endl;
            break;
        case 3:
            cout << "Earth " << endl;
            break;
        case 4:
            cout << "Mars " << endl;
            break;
        case 5:
            cout << "Jupiter " << endl;
            break;
        case 6:
            cout << "Saturn " << endl;
            break;
        case 7:
            cout << "Uranus" << endl;
            break;
        case 8:
            cout << "Neptune" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 8." << endl;
    }

    return 0;
}
