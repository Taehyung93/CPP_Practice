#include <iostream>
#include <vector>

using namespace std;


void print_fnc(int n) {
    cout << n << " ";
}


int main(){

    //* For Statement

    vector<int> v(10, 1); // 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    int s = v.size(); // do not insert v.size() for loop inside, every for loop it will call size() method.

    for (int i = 0; i < s; ++i){
        if(i == 8){
            break;
        } else if (i == 1){
            continue;
        }

        cout << i << " "; // result is 0 2 3 4 5 6 7
    }
    cout << endl;

    for(int i: v)
        cout << i << " "; // this for loop style is the lower performance than for(int i; i < length; i++)

    cout << endl;

    /*
        3 Reasons why using foreach statement

        1. Concise code
        2. inlineization using function objects
        3. Users define the function of for_each statement to give flexibility.

        for_each(ADDRESS VALUE OF START, ADDRESS VALUE OF LAST, USER DEFINED FUNCTION )
    */

    vector<int> v1= { 1,2,3,4,5 };
    vector<int>::iterator itr = v1.begin();

    cout << "for_each statement calls function : ";
    for_each(v1.begin(), v1.end(), print_fnc);    
    cout << endl;


    cout << "for_each statement calls lambda: ";
    for_each(itr, itr + v1.size(), [](auto& n) {    
        cout << n << " ";
    });
    cout << endl;



    //* While Statement


    // unsigned int count = 10; 
    // Count can not be negative and continues to fall under the repetition condition and falls into an infinite loop.
    int count = 10;

    while (count >= 0){ // 1 is true -> infinite loop, needs break statement.
        if (count == 0) 
            cout << "zero";
        else 
            cout << count << " ";
        count--;
    }
    cout << endl;

    //* Do While Statement

    int selection;

    do
    {
        cout << "1. add" << endl;
        cout << "1. add" << endl;
        cout << "1. add" << endl;
        cout << "1. add" << endl;
        cin >> selection;
    } while (selection <= 0 || selection >= 5);
    
    return 0;
}

