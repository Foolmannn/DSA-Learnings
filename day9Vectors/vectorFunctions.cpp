#include <iostream>
#include <vector>
using namespace std;
// Functions in vectors

int main()
{

    vector<int> vec; // this will create the 0 size vectors

    // when added the element as the vector gets resized so it is dynamiically allocated 

    //vector uses the heap memory and array uses the stack memrory 
    //vector uses the bigger memory as When the size is insufficient then the size will be doubled 
    // this can be verified using the capacity functions

    // so vector are preferred instead of array as array is statica size cannot be altered 

    // vector <int> vec = {1,2,3};


    vector <char> vec1 = {'a','b','c','d','e'};

    cout<< "Size of vector="<<vec1.size()<<endl;
    
    cout<< "Size of vector="<<vec.size()<<endl;
    vec.push_back(23); // this add the 23 at the end of the vector
    vec.push_back(24);
    vec.push_back(29);
    vec.push_back(30);
    vec.push_back(40);
    cout<< "Size of vector="<<vec.size()<<endl;
    cout<< "Capacity of vector="<<vec.capacity()<<endl;
    
    vec.pop_back(); // this will remove the last index value 
    
    cout<< "Size of vector="<<vec.size()<<endl;

// Accessing value at the front and back of the vector 
    cout<< "Front value "<< vec.front()<<endl;
    cout<< "Back/ last value "<< vec.back()<<endl;

    // getting the value at certain index

    cout<<"value at index 2 "<< vec.at(2)<<endl;

    for(int val: vec){
        cout<< val<< endl;
    }





    return 0;
}