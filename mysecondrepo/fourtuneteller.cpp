#include <iostream>
using namespace std;

int main() {
    int favNumber;
    int disNumber;
    int luckyNumber;

    cout << "Quick!! Give me two numbers (one you like, one you dislike):" << endl;

    cin >> favNumber >> disNumber; 

    luckyNumber = (favNumber * disNumber) % 10; 

    if (luckyNumber == 0) {
        cout << "Think more positive." << endl;
    } else if (luckyNumber > 0 && luckyNumber <= 4) {  // If it is between 0 to 4 inclusive
        cout << "Think Bigger." << endl;
    } else if (luckyNumber >= 5 && luckyNumber < 9) {  // If it is between 5 and 9 exclusive
        cout << "Today you should embrace technology." << endl; 
    } else if (luckyNumber >= 9) {
        cout << "This is your lucky day." << endl; 
    } 
    return 0;
}
