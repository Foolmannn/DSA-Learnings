#include <iostream>

using namespace std;

int main(){

// Arithmetic Operators 

    int a=16 , b=7;
    cout<< "Sum= "<< (a+b) << endl;
    cout<< "Subtraction= "<< (a-b) << endl;
    cout<< "Product= "<< (a*b) << endl;
    cout<< "Division= "<< (a/b) << endl;
    // int/int will give int so if we want the float values we need to
     // double / int or float/ int or int / float or int / double 
     // it means that the type will be converted to the larger datatypes 
    cout<< "DivisionFloat= "<< (a/ (double)b) << endl;

    cout<< "Modulo= "<< (a%b) << endl;

// Relational Operators 

    cout<< "Relational Operators::"<< endl;
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;
// Logical Operators 
       cout<< "Logical Operators::"<< endl;
    // Logical Not

       cout<< !(3  > 1) << endl;
       //Logical AND (ampercent)
       // Both true then only true
       cout<< ((3 < 1)  && (4 > 1))  << endl;
       cout<< ((3 > 1)  && (4 > 1))  << endl;
       //Logical OR operator ( Pipe)
       // Both false then only false
       cout<< ((3  > 1) || (5 < 7)) << endl;
       cout<< ((3  < 1) || (5 > 7)) << endl;

//Bitwise operators 
    
    return 0;
}