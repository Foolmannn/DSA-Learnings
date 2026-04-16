
#include <iostream>
using namespace std;

int main()
{
    // WAF to print intersection of 2 arrays.
    
    int arr1[] = {3, 5, 6, 2, 8};
    int arr2[] = {1, 2, 4, 6, 0};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i]<<" ,";
            }
        }
    }

    return 0;
}