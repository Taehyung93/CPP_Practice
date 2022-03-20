/*
    I             1
    V             5
    X             10
    L             50
    C             100
    D             500
    M             1000

    I can be placed before V (5) and X (10) to make 4 and 9. 
    X can be placed before L (50) and C (100) to make 40 and 90. 
    C can be placed before D (500) and M (1000) to make 400 and 900.

    II = 2, III = 3, VI = 6,
    IV = 4, IX = 9, 
    XL = 40, XC = 90,
    CD = 400, CM = 900
*/


class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        
        if(s.find("IV") != -1){
            result = 4;
            s.pop_back();
            s.pop_back();
        } else if(s.find("IX") != -1){
            result = 9;
            s.pop_back();
            s.pop_back();
        }
        
        if(s.find("XL") != -1){
            result += 40;
            s.erase(s.find("XL"), 2);
            
        } else if(s.find("XC") != -1){
            result += 90;
            s.erase(s.find("XC"), 2);
        }
        
        if(s.find("CD") != -1){
            result += 400;
            s.erase(s.find("CD"), 2);
        } else if(s.find("CM") != -1){
            result += 900;
            s.erase(s.find("CM"), 2);
        }
        
        for(int i: s){
            if(i == 'I'){
                result += 1;
            } else if(i == 'V'){
                result += 5;
            } else if (i == 'X'){
                result += 10;
            }  else if(i == 'L'){
                result += 50;
            } else if (i == 'C'){
                result += 100;
            }  else if(i == 'D'){
                result += 500;
            } else if (i == 'M'){
                result += 1000;
            }
        }
        
        return result;
        
    }
};

