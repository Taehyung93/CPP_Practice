#include <iostream>
#include <vector>
#include <list> 
#include <string>

using namespace std;



int main()
{
    string numbers = "1 2 4 7 19 -5";
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

    


    
    return 0;
}