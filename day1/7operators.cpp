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

//Unary Operators:

  //Increment operators:
      int n=6;
      int w= n++;
      // it is post increment here the work happens first then the increment occurs
      cout<< w <<endl;
      cout<< n <<endl;
      int m=10;
      int x= --m;
      //this is pre decrement here the work i.e assigning happens after and firstly the decrement occurs 
      cout<< x <<endl;
      cout << m <<endl;
      int p= 5;
      int y= p--;
      //this is post decrement here the work i.e assigning happens first and then  the decrement occurs 
      cout<< y <<endl;
      cout << p <<endl;



//Bitwise operators 
    
    return 0;
}