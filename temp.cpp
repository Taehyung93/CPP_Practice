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

bool parentheses(string s){
    int length = s.size();
    if (length % 2 == 1){
        return false;
    }
    for(int i = 0; i < length / 2; i++){
        if(s.find("()") != -1){
            s.erase(s.find("()"),2);
        } else if(s.find("{}") != -1){
            s.erase(s.find("{}"),2);
        } else if(s.find("[]") != -1){
            s.erase(s.find("[]"),2);
        } else {
            return false;
        }
    }
    
    return true;

}

int main()
{
    cout << parentheses("(") << endl;
    cout << parentheses("(){}[]") << endl;
    cout << parentheses("{}}{()") << endl;
    cout << parentheses("{[()]}") << endl;

    // string str = "(){}[]";    
    // cout << str.erase(0,3) << endl;
    // cout << str << endl;
    
    return 0;
}