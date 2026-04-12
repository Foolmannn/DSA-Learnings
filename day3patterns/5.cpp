#include <iostream>
using namespace std;

int main() {

/*
       1
      121
     12321
    1234321    
    divide into first and second part as below
    1
   12 1
  123 21
 1234 321    


*/
int n=7;
for(int i=0; i<n ; i++){
    //First part
    //spaces
    for (int j=0;j<n-i+1;j++){
        cout<<" ";
    }
    //numbers
    int num=1;
    for(int k=0;k<i+1;k++){
        cout<<num;
        num++;
    }
    //second part
    int num2=4;
    for(int j=i;j>0;j--){
         cout<<j;
     }
cout<<endl;
}

//For characters
for(int i=0; i<n ; i++){
    //First part
    //spaces
    for (int j=0;j<n-i+1;j++){
        cout<<" ";
    }
 // first part (A, AB, ABC...)
    char ch='A';
    for(int k=0;k<i+1;k++){
        cout<<ch;
        ch++;
    }
        // second part (reverse)
        char ch2 = 'A' + i - 1;
        for(int j = i; j > 0; j--) {
            cout << ch2;
            ch2--;
        }
cout<<endl;
}
    return 0;
}