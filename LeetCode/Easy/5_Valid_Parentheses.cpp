/*
    "()" => true, "{" => false 
    ! "{([])}" => true

    my below solution is not good enough efficiency.
    Runtime: 331 ms, faster than 5.95% of C++ online submissions for Valid Parentheses.

    Stack is right data model of this problem.
*/

class Solution {
public:
    bool isValid(string s) {
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
};


class Solution {
public:
    bool isValid(string s) {
        //taking stack for keep tracking the order of the brackets..
        stack <char> st;
        
        int len = s.length();
        for (int i = 0; i<len ; i++)//iterate over each and every elements
        {
             //if current element of the string will be opening bracket
             //then we will just simply push it into the stack
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if(st.empty())
                    return false;
                else if(s[i] == ')' && st.top() != '(')
                    return false;
                else if(s[i] == '}' && st.top() != '{')
                    return false;
                else if(s[i] == ']' && st.top() != '[')
                    return false;
                //if control reaches to that line,
                //it means we have got the right pair of brackets,
                //so just pop it.
                else 
                    st.pop();
            }
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};