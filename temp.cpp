#include <iostream>
#include <vector>
#include <list> 
#include <string>

using namespace std;



int main()
{

    string strng = "bsjq";
    vector<string> arr = {"bsjq", "qbsj", "sjqb", "twZNsslC", "jqbs"};
    vector<string> rotation;
    string str = strng;
    int length = str.size();
    int arrLength = arr.size();
    if(str.size() != 0 && arr.size() == 0){
        //return false;
    }
    for(int i = 0; i < length; i++){
    str.push_back(strng.front());
    str.erase(0,1);
    rotation.emplace_back(str);
    }

    for(int i = 0; i < length; i++){
        cout << rotation[i] << endl;
    }

    for(int i = 0; i < length; i++){
        for(int j = 0; j < arrLength; j++){
            if(rotation[i].compare(arr[j]) == 0){
                break;
            }
            if(j == arrLength - 1){
            cout << "false" << endl;
            }
        }    
    }

    cout << "true" << endl;
    
      


    
    return 0;
}