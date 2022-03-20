#include <iostream>
#include <list> // standard template library, aka stl, for using list, must include this
#include <vector> // it is also stl
#include <tuple> 

using namespace std;

int main(){

    //* List initialize

    // list is allocated memory when it has new value

    list<int> list1; // generate an empty list
    list<int> list2(4); // length is 4 and default value is initialized

    list<int>::iterator iter1 = list2.begin();
    for(list2.begin(); iter1 != list2.end(); iter1++){
        cout << *iter1 << ", ";
    }
    cout << endl;

    list<int> list3(4,3); // length is 4 and default value is 3
    list<int>::iterator iter2 = list3.begin();
    for(list3.begin(); iter2 != list3.end(); iter2++){
        cout << *iter2 << ", ";
    }
    cout << endl;

    /*
        One of the characteristics of the list is to output values from beginning to end
        using such generated for statements or data, but data cannot be extracted with typical for statements
        such as for(int i = 0; list_int.size(); i++). 
        This is because unlike vector, which allows direct access to each element index,
        the list does not allow direct access to elements at a particular point in the form in which the elements are connected.
    */

    list<int> list4{1,2,3,4,5}; // since C++11
    list<int>::iterator iter3 = list4.begin();
    for(list4.begin(); iter3 != list4.end(); iter3++){
        cout << *iter3 << ", ";
    }
    cout << endl;

    // copy the list
    list<int> list5(list4);
    list<int> list6 = list4;
    list<int> list7(list4.begin(), list4.end());

    // vector has not method like push_front, pop_front
    list4.push_front(1);
    list<int>::iterator iter4 = list4.begin();
    for(list4.begin(); iter4 != list4.end(); iter4++){
        cout << *iter4 << ", ";
    }
    cout << endl;

    list4.pop_front();
    list<int>::iterator iter5 = list4.begin();
    for(list4.begin(); iter5 != list4.end(); iter5++){
        cout << *iter5 << ", ";
    }
    cout << endl;

    //* Vector

    /* 
        vector is like list in other modern language.

        vector allocates a certain amount of memory in advance 
        and allocates a new larger memory when more values are added.

        In the case of vector, since it is assigned to consecutive addresses,
        it is not necessary to have other variables such as the next address like an additional linked list.
        Therefore, the vector uses less memory than the list.

        If additional deletion occurs only at the end, the vector is faster and consumes less memory.
        That is, vector is advantageous if addition or deletion occurs regardless of order or sequentially.
        On the contrary, If the order is important and values are added or deleted in the middle of the list, it is recommended to use the list.
        Vector is added or deleted in the middle, and the operation O(n) is required to push or pull things back.

    */

    // vector initialize

    vector<int> vector1 {1,2,3,4,5,6,7,8,9,10};
    vector<int> vector2(vector1.begin() + 1, vector1.begin() +4); // unlike list, vector can copy the specific index
    vector<int> vector3(5);
    vector<int> vector4(5,2);
    vector<int> vector5(vector4);
    for(int i = 0; i < vector1.size() ; i++){
        cout << vector1[i] << ", "; // for safety, using at(n) is good
    } 
    cout << endl;
    // there is two same data type vector, operators like "==", "!=", "<", ">", "=", ">=" can be used as comparison

    //rbegin(), rend() is method that is reverse to begin() and end() method
    vector<int> v = { 1, 2, 3, 4 };

    for_each(v.begin(), v.end(), [&](int& n){
        cout << n << ", ";        //output : 1 2 3 4
    });
    cout << endl;

    for_each(v.rbegin(), v.rend(), [&](int& n) {
        cout << n << ", ";        //output : 4 3 2 1
    });
    cout << endl;

    // 2 Dimension Vector

    vector<int> vector6[] = {{1,2}, {3,4}}; // Vector array (two-dimensional vector) declaration and initialization (column is fixed, row is flexible)
    vector<vector<int>> vector7; // 2D vector generation (flexible in both columns and rows)

    // Pair Class 

    vector<pair<int,int>> v3;
    v3.push_back(make_pair(10,20)); 
    
    for(int i=0;i<v3.size();i++) 
        cout << v3[i].first << " " << v3[i].second << endl;


    // Tuple Class

    vector<tuple<int,int,int>> v4;
    v4.push_back(make_tuple(10,20,30));
    v4.push_back(make_tuple(40,50,60));
    for(int i=0;i<v4.size();i++)
        cout << get<0>(v4[i]) << " " << get<1>(v4[i]) << " " << get<2>(v4[i]) << endl;


    /*
        you should be careful when using insert() and erase().
        because when using the function, c++ should find the variable and create the space.
        it makes move the data one by one. If the capacity() value is exceeded, a relocation will occur.
        It can also cause memory overhead and performance degradation.
        Therefore, if insertion and deletion occur frequently, it is better to use list or deque rather than vector.
    */

    /*
        Here is another explanation for clear().
        When clear() clears the vector values, the vector elements disappear, but the capacity() remains.
        In other words, if you erase the values of the vector with clear() and do not use them again, the memory space of the vector remains surplus.
        The solution to this problem is to use a swap.

        This will result in an empty Vector space and a swap, eliminating the capacity() space.
        However, when a function is finished (out of square brackets),
        it automatically releases memory from the heap, so that one function can be used.
        You don't have to do that unless you continue to recycle and use white matter.

        Below code is how to use it.
    */

    vector<int> v1 = { 1, 2, 3, 4};
    v1.clear();
    cout << v1.capacity() << endl;    //output : 10

    vector<int>().swap(v1);
    cout << v1.capacity() << endl;    //output : 0​

    //

    //

    /* 
        The emplace_back function is a function introduced in C++11 that
        uses variable factor templates to receive only the parameters needed to generate objects.
        So emplace and empace_back generate values inside the vector.

        v.emplace_back() Add a new element to the last part of the vector.
        v.emplace() Insert the element where the user wants it.
        Thoes two methods do not create copy constructor because of "move"

        When push_back is used, the creator/destructor of the temporary object is called
        from the outside to put a value in the vector,
        and the object is created once more in the process of being copied inside the vector.
        If you use emplace_back, if you only forward the creator's parameter values,
        the object is created once inside the vector.

        Push_back is only recommended when a parameter refers to an invalid object after a repeater or call like below code.
        std::vector<int> v;
        v.emplace_back(123);
        ! v.emplace_back(v[0]); => DO NOT USING LIKE THIS
        v.push_back(v[0]); It is safe because create tempory object
    */

    // Differnce between push_back and emplace_back

    vector<string> strList;
    string A = "test";
    strList.push_back(A); 
    strList.push_back(string("test"));
    
    strList.push_back("test"); //? it has not to function properly, but it hasn't.. why?

    // Imediately insert value, even pairList
    strList.emplace_back("test");
    vector<pair<int, int>> pairList;
    pairList.emplace_back(3, 5);

    return 0;
}