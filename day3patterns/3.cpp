#include <iostream>
using namespace std;

int main() {
// traingle pattern:::

int n= 4;
for (int i=0; i<n; i++){
    for (int j=0; j<i+1; j++){
        cout<<"* "<<" ";
    }
    cout<<endl;
}
// traingle of numbers
for (int i=0; i<n; i++){
    for (int j=0; j<i+1; j++){
        cout<<i+1<<" ";
    }
    cout<<endl;
}
// reverse traingle patterns
for (int i=0; i<n; i++){
    for (int j=i+1; j>0; j--){
        cout<<j<<" ";
    }
    cout<<endl;
}

//

    return 0;
}