#include <iostream>

using namespace std;

int main(){
    cout << endl;

    cout << "18446744073709551615, 2^64 -1, is equal to -1" << "\n\n";

    cout << "string(\"asdf\").find(\"fd\") is "  << string("asdf").find("fd") << "\n\n";
    

    for(int i: string("ISV")){
        if(i == 'I'){
            cout << "Comparison between string letters that can be compared with integer and char" << endl;
    }   else if(i == 'V'){
            cout << "String can only be compared with compare() method" << "\n\n";
        }
    }

    // char 1  -48 = integer 1 

    // least 1 


}