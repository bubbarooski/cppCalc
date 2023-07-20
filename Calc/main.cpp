#include <iostream>
#include "simpleCalculations.h"

using namespace std;

int main() {
    int menuChoice = 1;
    int userInput1;
    int userInput2;
    double result;

    while(menuChoice == 1) {
        cout << "Enter number 1: ";
        cin >> userInput1;
        cout << "Enter number 2: ";
        cin >> userInput2;

        result = addition(userInput1, userInput2);

        cout << "The answer is " << result << endl;

        cout << "Would you like to continue?" << endl;
        cout << "   0: No" << endl;
        cout << "   1: Yes" << endl;
        cout << "Choice: ";

        cin >> menuChoice;

        if(menuChoice == 0 || menuChoice == 1){
            continue;
        }
        else{
            
        }


    }

    return 0;
}

