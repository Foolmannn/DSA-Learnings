#include <iostream>

using namespace std;

int main(){
char ch;
cout<<"Enter the character:";

    cin>>ch;
int ascii= ch;
// cout<<ascii;
// as ascii value ranges from 65 to 90 for A_Z and 98 to 123 for a-z
if(ascii >= 65 && ascii <= 90){
    cout<<ch <<" is Uppercase";

}
else if(ch>=90 && ch<=123){
    cout<<ch<< " is Lowercase";
}
else{
    cout<<"Enter the valid english character";
}
    
    return 0;
   
}
   