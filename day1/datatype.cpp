// Datatypes:
/*
int: 4 bytes / ie 32 bits

char:  1 bytes / ie 8 bits stored as ASCII value

float: 8 bytes

bool :


*/
#include <iostream>

using namespace std;

int main(){
    int age=25;
    char  grade = 'A';
    string name = "Suman Pun Magar";


    cout<< sizeof(age) <<endl; // wil give 4 ie 4 bytes 
    cout<< grade <<endl;
    cout<< name <<endl;

    
    return 0;
}