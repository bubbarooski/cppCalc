//
// Created by Shane on 7/20/2023.
//

#include <iostream>
#include <limits>
#include "menuFunctions.h"

using namespace std;

struct mathArguments userArgs(){

    // Variables/structures
    double arg1;
    double arg2;
    struct mathArguments userInput;

    cout << "Enter number 1: ";
    cin >> arg1;
    cout << "Enter number 2: ";
    cin >> arg2;

    userInput.argArray[0] = arg1;
    userInput.argArray[1] = arg2;

    return userInput;
}

void menu(){
    cout << "Welcome to this basic calculator. Which operation would you like to do?" << endl;
    cout << "   1: Addition" << endl;
    cout << "   2: Subtraction" << endl;
    cout << "   3: Multiplication" << endl;
    cout << "   4: Division" << endl;
    cout << "   -1: Quit " << endl;
    cout << "Enter choice: ";
}

int menuSelection(){
    //Variables/structures
    int menuChoice = 0;

    try{
        cin >> menuChoice;

        if(menuChoice == 1 || menuChoice == 2 || menuChoice == 3 ||
           menuChoice == 4 || menuChoice == -1){
            return menuChoice;
        }
        else{
            throw(menuChoice);
        }
    }
    catch (int menuChoice){
        cout << "--Invalid menu choice--" << endl;
        return 0;
    }
}

