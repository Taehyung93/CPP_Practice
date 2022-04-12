#include <iostream>
#include <vector>
#include <list> 
#include <string>

using namespace std;



int main()
{
    string str = "This website is for losers LOL!";

    // "Ths wbst s fr lsrs LL!"
    
    string vowel = "aeiou";
    vector<int> removeVector;
    for(int i = 0; i < str.size(); i++){
        for(int j: vowel){
            if(j == tolower(str[i])){
                removeVector.push_back(i);
            }
        }
    }

    for(int i = 0; i < removeVector.size(); i++){
        str.erase(removeVector[i] - i,1);
    }

    cout << str << endl;
  
    

    
    return 0;
}