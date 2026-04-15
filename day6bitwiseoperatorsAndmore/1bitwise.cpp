/*
AND (&)

0 & 0 =0
0 & 1 =0
1 & 0 =0
1 & 1 =1

OR (|)

0 | 0 =0
0 | 1 =1
1 | 0 =1
1 | 1 =1


XOR(^) Exclusive OR (same bits then 0 else 1)

0 & 0 =0
0 & 1 =1
1 & 0 =0
1 & 1 =0

LeftShift(<<)

4<<1

0100<<1 means 1 bit shift to left
will give

01000 // 8 in decimal

10<<2
    1010 
   ////       shift by 2 bits and fill the empty spaces with 0
  101000 // 40 in decimal

a << b
Performs operation
ans= a* 2^ b 
RightShift(>>)

1010
[0101]  0 // here in the right shift there is not trailing value so the bit will be lost at 0 in this example

111111>>2
001111] 11 // this 11 will be lost 

a >> b
Performs operation
ans= a/2^b

for ex 10>>2

10/2^2
10/4
2


*/
#include <iostream>
using namespace std;

int main() {

int a = 4, b= 8;
/*


4=0100
6=1000

&=0000   //0
|=1100   //12
^=1100   //12

*/
cout<< (a & b) <<endl;

cout<< (a | b) <<endl;

cout<< (a ^ b) <<endl;

cout<< (a << 1) <<endl;
cout<< (10 << 2) <<endl;


cout<< (a >> 1) <<endl;
cout<< (10 >> 2) <<endl;

    return 0;
}