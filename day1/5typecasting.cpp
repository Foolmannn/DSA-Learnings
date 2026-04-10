/*
Type Casting :

converting data from one type to another 

conversion & casting

COnversion:
[implicit] i.e compiler does automatically 
from small to larger datatypes

for ex 
int to double as int takes 4 bytes and double takes 8 bytes 


CASTING:
[Explicit ] i.e conversion whether compiler allows or not manually

mostly used for LArger to small value


*/
#include <iostream>

using namespace std;

int main(){

    //Implicit 
    char grade = 'A';

    int value = grade;

    cout<< value << endl;
    //Explicit
    float price = 1000.99;
    
    int newPrice = price;
    int newPrice2 = (int)price; // this is the explicit typecasting 

    cout<< price << endl;
    cout<< newPrice << endl;
    cout<< newPrice2 << endl;
    
    return 0;
}
