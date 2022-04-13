#include <iostream>
#include <vector>
#include <list> 
#include <string>

using namespace std;



int main()
{
    int firstInt = 42145;

    vector<int> vec;

    while(firstInt > 0){
        vec.push_back(firstInt % 10);
        firstInt = firstInt / 10;
    }

    for(int i = 0 ; i < vec.size(); i++){
        for(int j = 0; j < vec.size(); j++){
            if(vec[i] > vec[j]){
                int temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }
        }       
    }

    for(int i = 0; i < vec.size(); i++){
        firstInt = firstInt * 10 + vec[i];
    }

    cout << firstInt << endl;



    
  
    

    
    return 0;
}