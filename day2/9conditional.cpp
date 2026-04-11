#include<iostream>
using namespace std;

int main(){
    int n=5;
    if(n>=0){
        cout<<n<<" is positive\n";
    }else{
        cout<<n<<" is negative\n";
        
    }
   int age = 19;
   if (age>=18){
    cout << "Can vote  \n";

   }else{
    cout<<"Can vote ";
   } 
   int m;
   cout<<"Enter the number:";
   cin>>m;
   if (m%2==0){
    cout << "Is even  \n";

   }else{
    cout<<"Is odd ";
   } 
   
    return 0;
}