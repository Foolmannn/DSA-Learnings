
#include <iostream>
using namespace std;

int main() {

int a = 10;
cout<<&a<< endl; // gives the addres in the hex form 

int* ptr= &a; // pointer to store the address of the a 
cout<< ptr<<endl;

cout<< *ptr <<endl; // dereference (value at address)

    return 0;
}