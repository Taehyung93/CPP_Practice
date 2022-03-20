/*
    121 => true
    -121 => false
    10 => false
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        } else {
            string y = to_string(x);
            int length = y.size();
            int half = length / 2;
            for(int i = 0; i < half; i++){
                if(y[i] != y[length - i  - 1]){
                    return false;
                }
            }
            return true;
            
        }
    }
};