#include <iostream>
using namespace std;

int main() {
int n=6;
//star pattern 
for(int i=0;i<n;i++){
    for(int j=0;j<=n-1;j++){
        cout<<"*"<<"  ";
    }
cout<<endl;
}
//character pattern 
for(int i=1;i<=n;i++){
    char ch= 'A';
    for(int j=0;j<n;j++){
        cout<<ch<<"  ";
        ch++; // here ch=ch+1 here the ch+1 will do the 65+1 then ch is char container so then 66 becomes B
    }
cout<<endl;
}
//another number pattern
// 123
// 456
// 789
int m=3;
int num= 1;
for(int i=0; i<m; i ++){
    for(int j=0; j<m; j++){
        cout<<num<<" ";
        num++;
    }
    
    cout<<endl;
}

    return 0;
}