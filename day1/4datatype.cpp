// Datatypes:
/*
int:   4 bytes / ie 32 bits

char:  1 bytes / ie 8 bits stored as ASCII value

float: 4 bytes

bool : 1 byte

double: 8 bytes



*/
#include <iostream>

using namespace std;

int main(){
    int age=25;
    char  grade = 'A';
    float PI = 3.14f; // f is neccessary otherwise the compiler will assume it as double as default
    bool isMale = true;  // true-> 1 and false-> 0 is stored in memory so printing them will give 1 and 0 

    double price = 100.999 ;


    string name = "Suman Pun Magar";


    cout<< sizeof(age) <<endl; // wil give 4 ie 4 bytes 
    cout<< grade <<endl;
    cout<< name <<endl;

    
    return 0;
}