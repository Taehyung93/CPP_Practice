/*
    Difficulty: 7 kyu
    n -> 1, 4, 9, 16 ... n^2
    d -> 0~9, d = 1, n = 10, result is 4 -> 1, 16, 81, 100
*/

#include <string>
using namespace std;
class CountDig
{
public:
    static int nbDig(int n, int d){
        string str = "";
        int count = 0;
  
        for(int i = 0; i < n + 1; i++){
            str = str + to_string(i*i);
        }
    
        for(int i = 0; i < str.size(); i++){
            if((int)str[i] -48 == d){
                count++;
            }
        }
        return count;
    }

};


class CountDig
{
public:
    static int nbDig(int n, int d) {
      int count = !d; // !d is 0
      for (int k = 1; k <= n; ++k)
        for (int m = k * k; m; m /= 10)
          count += m % 10 == d;
      return count;
    }
};


