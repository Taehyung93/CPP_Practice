/*
    Difficulty: 7 kyu

    highAndLow("1 2 3 4 5");  // return "5 1"
    highAndLow("1 2 -3 4 5"); // return "5 -3"
    highAndLow("1 9 3 4 -5"); // return "9 -5"
*/

#include <string>
#include <vector>

using namespace std;

std::string highAndLow(const std::string& numbers){
      string temp = "";
    vector<int> arr;
    int max = 0;
    int min = 0;

    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i] == ' '){
            arr.emplace_back(stoi(temp));
            temp = "";
            continue;    
        }
        temp += numbers[i];
    }
    arr.emplace_back(stoi(temp));

    max = arr[0];
    min = arr[0];
    for (int i = 0; i < arr.size(); i++){
        if(min > arr[i]){
            min = arr[i];
        }
        if (max < arr[i]){
            max = arr[i];
        }
    }
    string result = to_string(max) + " " + to_string(min);
    return result;
}


#include <string>
#include <sstream>
#include <vector>
using namespace std;
std::string highAndLow(const std::string& numbers){
  //your code here
  vector<int> v;
  stringstream s{numbers};
  string ss="";
  while(s>>ss){
  v.push_back(stoi(ss));
  }
  sort(v.rbegin(),v.rend());
  ss=to_string(v[0])+ " "+to_string(v[v.size()-1]);
  
  return ss;
  
}