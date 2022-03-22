#include <iostream>
#include <vector>

using namespace std;


string prefix() {
    vector<string> strs = {"dog","racecar","car"};
    int j = 0;
    string result = "";

    while(1){
        for(int i = 0; i < strs.size() - 1; i++){
            if(strs[i].size() == j || strs[i+1].size() == j){
                return result;
            }
            if(strs[i][j] != strs[i+1][j]){
                return result;
            }
        }
        result += strs[0][j];
        
        j++;
    }


}

int main()
{
    prefix();
    
    return 0;
}