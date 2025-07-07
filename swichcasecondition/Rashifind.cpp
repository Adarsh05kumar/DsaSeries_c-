#include <iostream>
using namespace std;
int main(){

  int num;
    cout << "Enter  month check  your Rashii: ";
    cin >> num;

    switch (num) {
        case 1:
            cout << "Aries";
            break;
        case 2:
            cout << "Taurus";
            break;
        case 3:
            cout << "Gemini";
            break;
        case 4:
            cout << "Cancer";
            break;
        case 5:
            cout << "Leo";
            break;
        case 6:
            cout << "Virgo";
            break;
        case 7:
            cout << "Libra";
            break;
        case 8:
            cout << "Scorpio";
            break;
        case 9:
            cout << "Sagittarius";
            break;
        case 10:
            cout << "Capricorn";
            break;
        case 11:
            cout << "Aquarius";
            break;
        case 12:
            cout << "Pisces";
            break;
        default:
            cout << "Invalid input";
    }







}