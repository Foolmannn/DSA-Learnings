#include <iostream>
#include <math.h>
using namespace std;

//Decimal to binary conversion  
int decToBinary(int decNum){

    int i=0;
    int bin=0;
    while(decNum>0){
        int r=decNum%2;
        decNum=decNum/2;
        bin=bin+pow(10,i)*r;
        i++;
    
    }
    return bin;//in binary form 

}

int main() {

cout<<decToBinary(50)<<endl;
for(int i=0; i<10; i++){
    cout<<decToBinary(i)<<endl;
    
}
    return 0;
}