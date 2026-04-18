#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec;

    // vector <int> vec = {1,2,3};


    vector <char> vec1 = {'a','b','c','d','e'};

    cout<< "Size of vector="<<vec1.size()<<endl;
    
    cout<< "Size of vector="<<vec.size()<<endl;
    vec.push_back(23);
    cout<< "Size of vector="<<vec.size()<<endl;



    return 0;
}