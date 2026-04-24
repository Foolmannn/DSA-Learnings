#include <iostream>
using namespace std;

int main() {

int arr[]={21,32,4,5,6}; // the name of the array in c++ is the type of pointer which points the first / 0 the index element address

cout<< arr<< endl; // pointer  so gives the address 

cout<< *arr <<endl; // dereference the address of the 0 th index ie fist element ie 21

int a = 220;
int* ptr = &a;
int b = 100;
ptr = &b; // this is ok as pointer can point to new other variable But same cannot be done for the array pointer 

// arr= &a;
 // this gives the error as the array pointer is the constant pointer It is because it the array pointer gets changed the whole array will be lost 

 // Pointer Arithmetic 

 int* p = &b;

 cout<< p<< endl;

 p++;  // this doesnot simply adds 1 to the pointer but it adds the size of the datatype as b is int so 4 bytes space is added .
 cout<< p<< endl;
 p--; // So the 4 bytes will be decreased giving the original p value ie address of the b 
 cout<< p<< endl;

 int *p2 = &a;
 cout<< p2 << endl;

 p2=p2+2; // this adds 2 int ie 4*2 bytes  
 cout<< p2 << endl;

 // this is applicable with array 

 cout<< *(arr)<<endl; // thie give the 0th element 
 cout<< *(arr+1)<<endl; // this will pointe to 1 th index element

 // we cannot adds two pointer but the subtract is allowed when the type are same 

 int* ptr1;
 int* ptr2= ptr1+ 2; // this adds 8 bytes 

 cout<< ptr2 - ptr1<< endl; // gives the 2 is the no of the block 

 // We can all the relational operator in pointer

 cout<< (ptr2>ptr1)<<endl; // in this way comparision can also be done it compare the addresses 
 ptr2= ptr1;
 cout<< (ptr2== ptr1)<< endl;
    return 0;
}