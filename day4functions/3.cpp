#include <iostream>
using namespace std;


int sum(int a, int b){
    return a+b;
}

void changeX(int x){
    x=2*x;
    cout<<"x ="<< x<<endl;
}
int main() {
    
    
    int x=5,y=7;
    //argument by value ::this creates the copy of argument is passed to functions
    //when passing the primitive datatypes they are passed by value
    cout<<sum(x,y)<<endl;
    cout<<sum(4,5)<<endl;

    changeX(x);

    cout<<"x ="<< x<<endl; // this will give 5 as the changes are made on the copy not this original mainfunction variable 

    return 0;
}