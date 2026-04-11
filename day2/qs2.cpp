#include <iostream>
using namespace std;

int main()
{

    // check if prime or not
    int n;
    cout << "Enter the number:";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " Is Non-prime";
            break;
        }
        else
        {
            cout << n << " Is Prime";
            break;
        }
    }
    cout << endl;
    //using the while and bool to store prime or not
    int k = 2;
    bool isPrime = true;
    while (k < n)
    {
        if (n % k == 0)
        {
            isPrime = false;
            break;
        }
        k++;
    }
    if (isPrime == true)
    {
        cout << "Is prime";
    }
    else
    {
        cout << "Is composite";
    }
    //Next approach
    // using factor ie factor repeat from the n^1/2 * n^ 1/2 this can be used to optimize the loop 
        for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " Is Non-prime";
            break;
        }
        else
        {
            cout << n << " Is Prime";
            break;
        }
    }

    return 0;
}