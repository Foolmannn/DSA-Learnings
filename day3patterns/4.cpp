#include <iostream>
using namespace std;

int main() {
//Floyd's traingle 

int n=4;
// int num=1;
// for(int i=0;i<n;i++){
//     for(int j=0; j<i+1; j++){
//         cout<<num<<" ";
//         num++;
//     }
//     cout<<endl;
// }
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
/*
1111
 222
  33
   4
   */
for(int i=0;i<n;i++){
    //For spaces 
    for(int j=0; j<i; j++){
        cout<<" ";
    }
    //for nums
    for(int k=0; k<n-i; k++){
        cout<<i+1;
    }
    cout<<endl;
}

// For character

char chr='A';
for(int i=0;i<n;i++){
    //For spaces 

    for(int j=0; j<i; j++){
        cout<<" ";
    }
    //for nums
    for(int k=0; k<n-i; k++){
        cout<<chr;
    }
    chr++;
    cout<<endl;
}



    return 0;
}