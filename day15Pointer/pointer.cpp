
#include <iostream>
using namespace std;

int main() {

int a = 10;
cout<<&a<< endl; // gives the addres in the hex form 
cout<<*(&a)<< endl; // dereference of the address 


int* ptr= &a; // pointer to store the address of the a 
cout<< ptr<<endl;

cout<< *ptr <<endl; // dereference (value at address)

// Pointer to the pointer 

int**ptr1=&ptr;
cout<<ptr1<<endl; // this gives the address of the ptr 
cout<<*ptr1<<endl; // this gives the value stored by ptr ie address of the a 
cout<<**ptr1<<endl; // this gives value of the a ie 10 . Double defrence does the dereference the ptr and again dereference finally reaching the value at a 


// NUll pointer 

int **ptr2 ; // although no value is not stored it gives the garbage value . So to avoid this the null pointer is used
cout<<ptr2<<endl;

int **ptr3= NULL;
cout<<ptr3<<endl; // gives the 0 which is null 

// We cannot dereference the Null pointer 
cout<<*(ptr3) << endl; // gives the memory segementation error ptr3 is not pointing to anythnig 



    return 0;
}