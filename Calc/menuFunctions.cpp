//
// Created by Shane on 7/20/2023.
//

#include <iostream>
#include <limits>
#include "menuFunctions.h"
#include "simpleCalculations.h"


/**
 * This function is used to take in the user numbers that want to have
 * an operation done to them.
 * @return userInput: a structure containing an array of the two values
 */
struct mathArguments userArgs(){

    // Variables/structures
    double arg1;
    double arg2;
    struct mathArguments userInput;

    std::cout << "Enter number 1: ";
    std::cin >> arg1;
    std::cout << "Enter number 2: ";
    std::cin >> arg2;

    userInput.argArray[0] = arg1;
    userInput.argArray[1] = arg2;

    return userInput;
}

/**
 * This function is used to print the menu.
 */
void menu(){
    std::cout << "Welcome to this basic calculator. Which operation would you like to do?" << std::endl;
    std::cout << "   1: Addition" << std::endl;
    std::cout << "   2: Subtraction" << std::endl;
    std::cout << "   3: Multiplication" << std::endl;
    std::cout << "   4: Division" << std::endl;
    std::cout << "   -1: Quit " << std::endl;
    std::cout << "Enter choice: ";
}

/**
 * This function is used to return the menu choice of the user. If they
 * enter a valid menu choice, it returns it. If not, it returns 0.
 * @return menuChoice: an int representing the menu choice
 */
int menuSelection(){

    // Variables/structures -----------
    int menuChoice = 0;
    // --------------------------------

    try{
        std::cin >> menuChoice;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

        menuChoice = int(menuChoice);

        if (menuChoice == 1 || menuChoice == 2 || menuChoice == 3 ||
            menuChoice == 4 || menuChoice == -1) {
                return menuChoice;
        }
        else {
            throw (menuChoice);
        }

    }
    catch (int menuChoice){
        std::cout << "--Invalid menu choice--" << std::endl;
        return 0;
    }
}

/**
 * This function is used to call the operation the user selected and pass
 * in the values to be operated on.
 * @param userInput: the selected operation to be computed
 */
void operationSelection(struct mathArguments userInput, int menuChoice){
    double result;

    switch(menuChoice){
        // Addition
        case 1:
            result = addition(userInput.argArray[0], userInput.argArray[1]);
            std::cout << "Answer: " << result << std::endl;
            std::cout << "----------" << std::endl;

        // Subtraction
        case 2:
            result = subtraction(userInput.argArray[0], userInput.argArray[1]);
            std::cout << "Answer: " << result << std::endl;
            std::cout << "----------" << std::endl;

        //Multiplication
        case 3:
            result = multiplication(userInput.argArray[0], userInput.argArray[1]);
            std::cout << "Answer: " << result << std::endl;
            std::cout << "----------" << std::endl;

        // Division
        case 4:
            result = division(userInput.argArray[0], userInput.argArray[1]);
            std::cout << "Answer: " << result << std::endl;
            std::cout << "----------" << std::endl;
    }
}