/*
    7kyu

    remove Vowel 'a e i o u'(except 'y') from given String 

*/


# include <string>
# include <vector>

using namespace std;

std::string disemvowel(const std::string& str) {
    
    string vowel = "aeiou";
    vector<int> removeVector;
    for(int i = 0; i < str.size(); i++){
        for(int j: vowel){
            if(j == tolower(str[i])){
                removeVector.push_back(i);
            }
        }
    }
    string result = str;
    for(int i = 0; i < removeVector.size(); i++){
        result.erase(removeVector[i] - i,1);
    }
  
    return result;
}



# include <string>
# include <regex>
std::string disemvowel(std::string str)
{
  std::regex vowels("[aeiouAEIOU]");
  return std::regex_replace(str, vowels, "");
}



# include <string>

std::string disemvowel(std::string str)
{
    for ( auto letter : "AEIOUaeiou" ) {
      str.erase(std::remove(str.begin(), str.end(), letter), str.end());
    }
    
    return str;
}


# include <string>
std::string disemvowel(std::string str)
{
  std::string vowels = "AEIOUaeiou", result = "";

  for (auto& ch : str)
    if (vowels.find(ch) == std::string::npos)
      result += ch;

  return result;
}