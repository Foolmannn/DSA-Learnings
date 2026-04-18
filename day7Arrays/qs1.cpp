// WAF to print all the unique values in an array

#include <iostream>
using namespace std;

int main()
{

    int arr1[] = {3, 5, 6, 2, 8, 2, 3, 0, 1, 8};
    int arr2[] = {1, 2, 4, 6, 0, 5, 4, 0, 9, 8};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);
    for (int i = 0; i < size1; i++)
    {
        int frequency = 0;
        for (int j = 0; j < size1; j++)
        {
            if (arr1[i] == arr1[j])
            {
                frequency++;
            }
        }
        if (frequency == 1)
        {
            cout << arr1[i] << ", ";
        }
    }
    //     for(int i = 0; i < size1; i++) {
    //     cout << arr1[i] << " ";
    // }

    return 0;
}