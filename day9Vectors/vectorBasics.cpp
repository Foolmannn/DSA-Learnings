#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // vector<int> vec;

    // vector <int> vec = {1,2,3};

    vector<int> vec(5, 0); // this create the size 5 vector and fill every element with 0

    vector <char> vec1 = {'a','b','c','d','e'};

    cout << "Displaying the elements from direct approach" << endl;
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    cout << vec[3] << endl;
    cout << vec[4] << endl;
    // cout<<vec[5]<<endl; // this will not work as we have upt o 4 index only
    cout << "Using the loop" << endl;
    // we use the special loop called for each loop 

    for(int i : vec){ // here i will store each elements in the vector and it is of type vector 
        cout<< i <<endl;
    }

    for (char val: vec1){
        cout<< val <<endl;
    }
    return 0;
}