#include <iostream>
using namespace std;

int main() {

    int size=5;
int marks[size];
//int marks[5]={99,67,34,79,99}; // fixed size 5 and fill the data 
int marks1[50]={99,67,34,79,99}; // fixed sixe 5 but only first five position are filled other are empty

double price[]={98.99,45.78,34.90}; //automatcially make the size 3 array


//way to enter the value
int array[5];
for(int i=0;i<5;i++){
    array[i]=i+1;
}
cout<<array[4]<<endl;

for(int i = 0; i < size; i++) {
    cin >> marks[i];
}
cout<<marks[4]<<endl;

//we can find the size of array as this
int size1= sizeof(marks1) / sizeof(int);
for(int i = 0; i < size1; i++) {
 cout << marks1[i] << endl;

}

    return 0;
}