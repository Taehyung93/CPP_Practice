#include <iostream>

using namespace std;

int main(){
    string str1 = "BlockDMask"; 
    string str2 = "BlogBlogBlogBlog"; 

    cout << endl;
    cout << "str1 : " << str1 << endl;
    cout << "str2 : " << str2 << endl;
    cout << endl;

    //* String member access method

    cout << "==> String member access method" << endl;
    cout << "str1.at(1) : " << str1.at(1) << endl;
    cout << "str1[1] : " << str1[1] << endl; // it does not inspect scale of string index, so it is faster than at method
    cout << "str1.front() : " << str1.front() << endl;
    cout << "str1.back() : " << str1.back() << endl;
    cout << endl;

    //* String size method

    cout << "==> String size method" << endl;
    cout << "str1.size() : " << str1.size() << endl; 
    cout << "str1.length() : " << str1.length() << endl; 
    cout << "str1.capacity() : " << str1.capacity() << endl; 
    /* 
        Returns the memory size (bytes) allocated to the string object.
        The capacity, like the capacity of the vector, can increase the string length,
        allowing memory allocation for size. When the size exceeds the capacity, 
        it allocates a new larger capacity. 
    */
    str1.resize(5);
    cout << "str1.resize(5) : " << str1 << endl;
    str1 = "BlockDMask";
    str1.shrink_to_fit(); // since C++11, shrink the capacity as many as possible
    cout << "str1.shrink_to_fit() : " << str1.capacity() << endl; 
    str1.reserve(100); // allocate the memory before using. it helps reduce the cost.
    cout << "str1.reserve(100) : " << str1.capacity() << endl; 
    str1.clear();
    cout << "str1.clear() : " << str1 << endl; // but clear() remains capacity
    cout << "str1.empty() : " << str1.empty() << endl; // 1 is true, 0 is false
    cout << endl;

    //* String transform method

    str1 = "BlockDMask";
    cout << "==> String transform method" << endl;
    cout << "str1.c_str() : " << str1.c_str() << endl; // conver to C style string, "BlockDMask" => "BlockDMask\0"
    str1 = "BlockDMask";
    cout << "str1.substr(1) : " << str1.substr(1) << endl;
    str1 = "BlockDMask";
    cout << "str1.replace(0,2,\"KKK\") : " << str1.replace(0,2,"KKK") << endl;
    str1 = "BlockDMask";
    cout << "str1.compare(str2) : " << str1.compare(str2) << endl; // exactly same value returns 0 else return integer number
    //size_t copy(char* arr, size_t len, size_t index = 0) const;
    char arr[10];
    int result = str1.copy(arr, 4, 0);
    //? print arr, it has garbage value but.. does not
    arr[result] = '\0'; 
    cout << "str1.copy(arr, 4, 0) : " << arr << endl;
    cout << "str1.find(\"oc\", 0) : " << str1.find("oc", 0) << endl;
    str1.push_back('c'); // " " is not allowed because it is const char [2]
    cout << "str1.push_back(\'c\') : " << str1 << endl;
    str1.pop_back();
    cout << "str1.pop_back() : " << str1 << endl;
    swap(str1, str2);
    cout << "swap(str1, str2), str1 : " << str1 << endl;
    swap(str1, str2);
    cout << "str1 + str2 : " << str1 + str2 << endl;
    cout << endl;

    //* String iterator method
    cout << "==> begin, end" << endl;
    string::iterator iter = str1.begin();
    for (; iter != str1.end(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << endl;
    cout << endl;

    return 0;
}