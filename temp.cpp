#include <iostream>
using namespace std;

int main() {

int a= 5;
int* p=&a;
int** q=&p;
cout<<&a<<endl;

cout<<*p<<endl;
cout<<**q<<endl;
cout<<p<<endl;
cout<<*q<<endl;

int arr[]={10,20,30,40};
int* ptr = arr;
cout<< *(ptr + 1) << endl;//20
cout<< *(ptr + 2) << endl; // 30
ptr++;
cout<< *ptr<< endl;//20

    return 0;
}