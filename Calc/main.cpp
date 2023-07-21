#include <iostream>
#include "stdlib.h"
#include "simpleCalculations.h"
#include "menuFunctions.h"

using namespace std;

int main() {

    // Variables/structures -----------
    int menuChoice = 0;
    struct mathArguments userInput{};
    // --------------------------------

    while(true) {

        // Welcome menu
        menu();
        menuChoice = menuSelection();

            if(menuChoice == 0){
                continue;
            }
            if(menuChoice == -1){
                cout << "Thank you!";
                exit(0);
            }

        operationSelection();
    }
}

