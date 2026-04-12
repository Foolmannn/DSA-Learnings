#include <iostream>
using namespace std;

int main() {

/*Hollow Diamond pattern

          * 
        *   *
     *         *
 *                *
 
     *         *
        *   *
          * 

*/
//Top part
int n= 4;
for(int i=0; i<n ; i++){
    //for spaces
    for(int j=0;j<n-i-1;j++){
cout<<" ";

    }
    cout<<"*";
    if(i!=0){
    for(int k=0;k<2*i-1;k++){
        cout<<" ";
        
    }
        cout<<"*";
    }
    cout<<endl;
}
//bottom part
int m=n-1;
for(int i=0; i<m ; i++){
    //for spaces
    for(int j=i;j>=0;j--){
cout<<" ";

    }
    cout<<"*";
    if(i!=(m-1)){
    for(int k=0;k<2*(n-i)-5;k++){
        cout<<" ";
        
    }
        cout<<"*";
    }
    
    cout<<endl;
}

    return 0;
}