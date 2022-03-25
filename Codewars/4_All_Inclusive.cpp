/*
    Difficulty: 7 kyu

    "bsjq", ["bsjq", "qbsj", "sjqb", "twZNsslC", "jqbs"]) -> true
    "Ajylvpy", ["Ajylvpy", "ylvpyAj", "jylvpyA", "lvpyAjy", "pyAjylv", "vpyAjyl", "ipywee"]) -> false)
*/

#include <vector>
#include <string>

using namespace std;

class Rotations
{
public:
    static bool containAllRots(const std::string &strng, std::vector<std::string> &arr){
      string str = strng;
      vector<string> rotation;
      int length = str.size();
      int arrLength = arr.size();
      if(str.size() != 0 && arr.size() == 0){
        return false;
      }
      for(int i = 0; i < length; i++){
        str.push_back(str.front());
        str.erase(0,1);
        rotation.emplace_back(str);
      }

      for(int i = 0; i < length; i++){
         for(int j = 0; j < arrLength; j++){
              if(rotation[i].compare(arr[j]) == 0){
                  break;
              }
              if(j == arrLength - 1){
                return false;
              }
          }    
      }

      return true;
    };
};

class Rotations
{
public:
  static bool containAllRots(std::string& str, const std::vector<std::string>& arr)
  {
      for (int i = 0; i < str.length(); ++i)
      {
          if(find(arr.begin(), arr.end(), str) == arr.end())
              return false;
          rotate(str.begin(), str.begin()+1, str.end());
      }
      return true;
  }
};