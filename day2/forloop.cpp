#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i <= 10; i++)
    {
        cout << i << endl;
    }
    for (int j = 0; j <= 10; j = j + 2)
    {
        cout << j << endl;
        if(j==6){
            break;
        }
    }
    int n, sum;
    cout << "Enter the number:" << endl;
    cin >> n;
    for (int k = 1; k <= n; k++)
    {
        sum = sum + k;
    }
    cout << "The sum is:" << sum;

    return 0;
}