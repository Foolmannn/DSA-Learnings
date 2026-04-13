#include <iostream>
using namespace std;

// functions to add the each digits
int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {

        int r = n % 10;
        sum += r;
        n /= 10;
    }
    return sum;
}

//nCr combinations 
// nCr = n!/r!(n-r)!

int factorial(int a){
    int fact=1;
for(int i=1; i<=a; i++)
{
    fact*=i;
}
return fact;
}

//combination
int nCr(int n, int r){
    int fact_n=factorial(n);
    int fact_r= factorial(r);

    int fact_nminusr= factorial(n-r);
    return fact_n/(fact_r*fact_nminusr);
}

int main()
{

    int num = 23456;

    cout << sumOfDigits(num);

    cout<<endl;
    cout<<"Combinations is:"<<nCr(6,3);

    return 0;
}