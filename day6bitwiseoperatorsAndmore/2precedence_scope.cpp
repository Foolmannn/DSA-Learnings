#include <iostream>
using namespace std;

int g = 100; // global variable

//Function scope
void func() {
    int f = 5;
}


int main() {
//Precedence

cout<<2 + 3 * 4<<endl; // will give 14
cout<< (2 + 3) * 4<<endl; //will give 20
// Associativity 

// if same precedence then left to right for most operators 
// for assignment operators right to left associativity


//BLock or local Scope

    int x = 10; // local to main

    if (true) {
        int y = 20; // local to this block
        cout << x << " " << y << endl;
    }

    // cout << y; ERROR (y not accessible here)
    cout<<g<<endl;
    
    
    
    // cout<<f<<endl; //will give error 



// Variable Shadowing (IMPORTANT)


     int g = 20; // local shadows global
     //this hides the global variable with same name so to access global one we need :: before the name of the global variable
    cout << g <<endl; // 20

    cout << ::g; // 100
    return 0;
}