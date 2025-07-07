#include <iostream>
using namespace std;
int main(){

  int num;
    cout << "Enter number take a shape angel: ";
    cin >> num;

    switch (num) {
       
        case 3:
            cout << "Trangle";
            break;
        case 4:
            cout << "Quardrilateral";
            break;
        case 5:
            cout << "petagon";
            break;
        case 6:
            cout << "Hexagon";
            break;
        case 7:
            cout << "Heptagon";
            break;
        case 8:
            cout << "Octagone";
            break;
        case 9:
            cout << "Nanagon";
            break;
        case 10:
            cout << "Decagon";
            break;
        case 11:
            cout << "Hendecagon";
            break;
        case 12:
            cout << "Dodecagon";
            break;
        default:
            cout << "Invalid input";
    }







}