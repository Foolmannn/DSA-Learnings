#include <iostream>
using namespace std;

int main() {
//Floyd's traingle 

int n=4;
int num=1;
for(int i=0;i<n;i++){
    for(int j=0; j<i+1; j++){
        cout<<num<<" ";
        num++;
    }
    cout<<endl;
}
//Floyd's traingle charcter problem 
/*
A 
B C
D E F 
G H I J

*/
char ch= 'A';
for(int i=0;i<n;i++){
    for(int j=0; j<i+1; j++){
        cout<<ch<<" ";
        ch++;
    }
    cout<<endl;
}
    return 0;
}