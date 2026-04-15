//Figure out  how to find if a number is power of 2 wihout any loop

// WAF to reverse the interger n
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

bool isPowerOfTwobyRightShift(int n) {
    if (n <= 0) return false;

    while (n > 1) {
        if (n % 2 != 0) return false; // odd number
        n = n >> 1; // divide by 2
    }

    return true;
}

bool isPowerOfTwoByLeftshift(int n) {
    if (n <= 0) return false;

    int x = 1;
    while (x <= n) {
        if (x == n) return true;
        x = x << 1; // multiply by 2
    }

    return false;
}

int main() {

// a*2^b
// a/2^b

/*
n >> 1; // means divide by 2
x << 1; // means multiply by 2
we can use this too check for power of 2




*/
cout<<isPowerOfTwoByLeftshift(10)<<endl;
cout<<isPowerOfTwobyRightShift(16)<<endl;

return 0;
}