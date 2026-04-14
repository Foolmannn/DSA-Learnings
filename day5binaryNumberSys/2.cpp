#include <iostream>
#include <math.h>
using namespace std;


int binToDec(int binNum){
int i=0;
int ans=0;
while(binNum>0){

    int r=binNum%10;
    binNum/=10;
    ans=ans+r*pow(2,i);
    i++;
}
return ans;
}
int main() {
cout<<binToDec(101010)<<endl;

for(int i=0; i<10; i++){
    cout<<binToDec(i)<<endl;
    
}

    return 0;
}