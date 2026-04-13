#include <iostream>
using namespace std;
// funtion Definations
int printHello(){
    cout<<"Hello\n";
    return 3;
}

double minNum(double a, double b){//parameters are the copy of the values that are the variable that can change
    return a>b?b:a;
}

//function to calculate the sum of two numbers 
int sum(int a, int b){
    return a+b;
}
int main() {
//Function call
int val= printHello();
cout<<"Value is "<<val<<endl;



cout<<sum(5,6)<<endl;

cout<<minNum(34.55, 67.66);//arguments are the actual values or literals that get passed in the functions

    return 0;
}