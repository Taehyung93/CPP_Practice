#include <iostream>

using namespace std;

int main(){

    //* to string

    string str1 = to_string(123);
    cout << str1 << endl;

    //* to int, C+11
    int i = stoi("123");
    //* to double, C+11
    double i = stod("123.123");

    return 0;
}