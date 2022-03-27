#include <iostream>
#include <vector>
#include <list> 
#include <string>

using namespace std;



int main()
{
    int num = 1234;
    string str = to_string(num);
    int length = str.size();
    string square = "";
    
    for(int i = 0; i < length; i++){
        int intTemp =  ((int)str[i] - 48) * ((int)str[i] - 48);
        string temp = to_string(intTemp);
        square += temp;
  }
  
  
    

    
    return 0;
}