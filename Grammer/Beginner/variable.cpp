#include <iostream>

using namespace std;

int main(){
    //* Integer
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
    char Char = 'a' // 
    unsigned char uChar = 

    //* Boolean (since C+11)
    bool a = false;
    a = true;
    bool b = 12; // if boolean variable has not equal to integer 0, it will be always 1 (true)
    std::cout << a << endl;
    std::cout << b << endl;

    


    return 0;
}