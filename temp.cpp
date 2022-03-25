#include <iostream>
#include <vector>
#include <list> 
#include <string>

using namespace std;



int main()
{
    vector<int> arr = {1,2,4,7,19};
    vector<int> arr2 = {1,2,4,3,19};

    for (int i = 0; i < arr2.size() -1; i++){
        if(arr2[i] > arr2[i+1]){
            cout << "false" << endl;
        }
    }

    cout << "true" << endl;


    
    return 0;
}