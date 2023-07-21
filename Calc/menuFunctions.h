//
// Created by Shane on 7/20/2023.
//

#ifndef CPPCALC_MENUFUNCTIONS_H
#define CPPCALC_MENUFUNCTIONS_H

// Variables/Structures ---------------
struct mathArguments{
    double argArray[2];
};
// ------------------------------------

// Functions
struct mathArguments userArgs();
void menu();
int menuSelection();
void operationSelection();

#endif //CPPCALC_MENUFUNCTIONS_H
