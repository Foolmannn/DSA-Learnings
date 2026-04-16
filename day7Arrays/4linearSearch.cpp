// LINEAR SEARCH

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target) // found
            return i;
    }
    return -1; // not found
}
// time complexity O(n) . ie linear time complexity 




int main()
{

    int arr[] = {1, 2, 4, 2, 4, 5, 9, 0, 13};
    int s = sizeof(arr) / sizeof(int);

    cout << linearSearch(arr, s, 0) << endl;
    cout << linearSearch(arr, s, 50) << endl;

    return 0;
}
