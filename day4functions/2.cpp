#include <iostream>
using namespace std;

// sum of the number up to N
int sumN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

// calculation of N factorial

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    cout << "The sum upto number is:" << sumN(10) << endl;


    cout << "The factorail is:" << fact(10) << endl;
    cout << "The factorail is:" << fact(5) << endl;

    return 0;
}