#include <iostream>
#include "stdlib.h"
#include "menuFunctions.h"


/**
 * This is the main driver function of the program. It calls the menu
 * and passes the user input to the math control function.
 */
int main() {

    // Variables/structures -----------
    int menuChoice = 0;
    struct mathArguments userInput{};
    // --------------------------------

    while(true) {

        // Welcome menu
        menu();
        menuChoice = menuSelection();

            if(menuChoice == 0 || menuChoice == -1){
                if(menuChoice == 0){
                    continue;
                }
                else{
                    std::cout << "Thank you!";
                    exit(0);
                }
            }
            else {
                userInput = userArgs();
                operationSelection(userInput, menuChoice);
            }
    }
}

