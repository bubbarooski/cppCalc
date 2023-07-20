#include <iostream>
using namespace std;

int addition (int arg1, int arg2){
    int addition = arg1 + arg2;
    return addition;
}

int main() {
    int userInput1;
    int userInput2;
    int result;

    cout << "Enter number 1: ";
    cin >> userInput1;
    cout << "Enter number 2: ";
    cin >> userInput2;

    result = addition(userInput1, userInput2);

    cout << "The answer is " << result << endl;

    return 0;
}

