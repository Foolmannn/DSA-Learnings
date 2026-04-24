#include <iostream>
using namespace std;

void changeA(int a){ // pass by value 
    a=20; // this just created the copy of the  a passed and assigne 20 to the copy 
    
}
void changeAbyreference(int* ptr){ // this function take the parameter as the pointer which takes the address reference passed 
    *ptr= 20; // this is directly changing the value in the memory location ie original value 
    
}
int main() {

int a= 10;
changeA(a);
cout<< "Inside the main fnx:" << a<< endl;  // 10  as the changes were made in the copy of the a 


changeAbyreference(&a); // here instead of the value we are passing the address / reference 

cout<< "Inside the main fnx:" << a<< endl; // 20 

    return 0;
}