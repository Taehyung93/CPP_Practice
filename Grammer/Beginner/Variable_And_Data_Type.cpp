#include <iostream> //? without include string, still string class can be used
#include <string>

using namespace std;

int main(){
    //* Integer
    
    // 'sInt' is variabe, 'short' is data type
    short sInt = 2; // 2 bytes and Scale is -2^15 ~ 2^15 - 1
    unsigned short usInt = 2; // 2 bytes and Scale is 0 ~ 2^16 - 1

    int Int = 4; // 4 bytes and Scale is -2^31 ~ 2^31 - 1
    unsigned int uInt = 4; // 4 bytes and Scale is 0 ~ 2^32 - 1

    long lInt = 4; // 4 bytes and Scale is -2^31 ~ 2^31 - 1
    unsigned long ulInt = 4; // 4 bytes and Scale is 0 ~ 2^32 - 1

    long long llInt = 8; // 8 bytes and Scale is -2^63 ~ 2^63 - 1
    unsigned long long ullInt = 8; // 8 bytes and Scale is 0 ~ 2^64 - 1

    //* Float

    float Float = 4; // 4 bytes and Scale is -3.4*10^-38 ~ 3.4*10^38 - 1
    double Double = 8; // 8 bytes and Scale is -1.7*10^-308 ~ 1.7*10^308 - 1

    //* String

    char Char = 97;
    std::cout << Char << endl; // C++ prints char variable to ASCII code letter instead of integer itself
    // ASCII Code 65 is letter 'A', 'Z' is 90, 'a' is 97, 'z' is 123

    unsigned char uChar = 128;
    // since after ASCII code 128, it contains special letter get more info: https://www.ascii-code.com/
    std::cout << uChar << endl;

    //Unlike char* and char[], the character '\0' is not included at the end of the string, and the length of the string can be dynamically changed.
    string str1 = "blockDMask"; 
    // string data type can be used since C++98 version
    std::cout << str1 << endl;

    //* Boolean (since C++98 version)

    bool a = false;
    a = true;
    bool b = 12; // if boolean variable has not equal to integer 0, it will be always 1 (true)
    std::cout << a << endl;
    std::cout << b << endl;

    //* Initialization

    int c(1000);
    //! using variabe 'a' instead of variabe 'c', it will occur error because..
    // CPP can not redefinition of variable with a different type ex) 'int' vs 'bool'
    std::cout << c << endl;

    //* auto (since C++11 version)

    auto likePython = 123;
    std::cout << likePython << endl;

    //! it will not occur error despite of redefinition of variable with a different type
    likePython = false;
    std::cout << likePython << endl;

    // The auto keyword can’t be used with function parameters and stucture & Class's member variable
    // ex: void addAndPrint(auto x, auto y)
     
    // Type inference for functions in C++14
    // ex: auto add(int x, int y){ return x + y;}

    //? it will very useful when using templete

    //* decltype(X) (since C++11 version)

    int intX = 123;
    decltype(intX) intY = 321;

    //* bitset and list, vector is not written here.


    return 0;
}