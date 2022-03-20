#include <iostream>
#include <vector>

using namespace std;
int main()
{
    string s = "ADFAF";

    for(int i: s){
        if(i == 'A'){
            cout << 123123 << endl;
        }
    }

    
    return 0;
}