#include <iostream>
#include "simpleCalculations.h"
#include "menuFunctions.h"

using namespace std;

int main() {

    // Variables/structures
    int menuChoice = 0;
    struct mathArguments userInput{};

    while(menuChoice != -1) {

        // Welcome menu
        menu();
        menuChoice = menuSelection();

            if(menuChoice == 0){
                continue;
            }


        cout << "test" << endl;

        userInput = userArgs();

        cout << userInput.argArray[0];

    }

    return 0;
}

