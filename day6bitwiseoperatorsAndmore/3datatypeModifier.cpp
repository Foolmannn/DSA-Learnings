#include <iostream>
using namespace std;

int main() {

cout<<sizeof(int)<<endl;
// long
cout<<sizeof(long int)<<endl;
//short
cout<<sizeof(short int)<<endl;
// long long
cout<<sizeof(long long int)<<endl;

//signed
// Allows both positive and negative values
// Default for most types is already signed
signed int x = -10;
cout<<x<<endl;

//Unsigned
// Allows only positive values (0 and above)
unsigned int y = -5;
cout<<y<<endl; // willl give the large postive due to wrap around 

    return 0;
}