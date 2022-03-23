/*
    flower, float, flow => fl => true
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int j = 0;
        string result = "";
        if(strs[0] == ""){
            return "";
        } else if (strs.size() == 1){
            return strs[0];
        }
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
};