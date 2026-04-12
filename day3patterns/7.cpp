#include <iostream>
using namespace std;

int main() {
/*
//BUTTERFLY PATTERN 
*             * //6 spaces
* *         * * //4
* * *     * * * //2
* * * * * * * * //0 spaces --buttom part from here
* * *     * * * //2
* *         * * //4
*             * //6

*/
//Top part
int n= 4;
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<"*";
    }
    //for spaces
    for(int j=0;j<(n+2)-(i*2);j++){
        cout<<" ";
    }
    for(int j=0;j<=i;j++){
        cout<<"*";
    }
    

    cout<<endl;
    
}
//Bottom part
for(int i=0;i<n-1;i++){
       for(int j=0;j<=n-i-2;j++){
        cout<<"*";
    }
 
    //for spaces
    for(int j=0;j<=(i*2)+1;j++){
        cout<<" ";
    }

       for(int j=0;j<=n-i-2;j++){
        cout<<"*";
    }
 
    

    cout<<endl;
    
}






    return 0;
}