#include <iostream>

using namespace std;

int main(){

    
    //* If Statement

    cout << "Enter an integer: ";
    int x;
    cin >> x;
    cout << "Enter another integer: ";
    int y;
    cin >> y;
    if (x > 0 && y > 0)
        cout << "both numbers are positive\n";
    else if (x > 0 || y > 0) 
        cout << "One of the numbers is positive\n";
    else 
        cout << "Neither number is positive\n";

    //* Ternary Operator

    /*
        The ternary operator is a syntactic and readability convenience, 
        ! not a performance shortcut. 
        People are split on the merits of it for conditionals of varying complexity,
        but for short conditions, it can be useful to have a one-line expression.
    */

    x > y ? cout << "x is greater than y" << endl : cout << "y is greater than x" << endl;

    //* Switch Statement
    
    /*
        These switch statements are more readable than if/else statements, 
        and the compiler makes it easier to optimize, so they are faster.
        However, only the integer promotion value that
         can be promoted to int type can be used as the condition value of the switch statement.
        In other words, C++ can only use char, short, int variables, literals, and enumerations.
    */

    switch (x){

        case 10:
            cout << "x is 10 !!!" << endl;
            break;

        case 20:
            cout << "x is 20 !!!" << endl;
            break;

        default:
            cout << x << endl;
            break;
    }

    return 0;
    }