#include <iostream>
using namespace std;

void changeArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
        // code
    }
}

// Time complexity for two pointer approach is also linear ie O(n)
// Two pointer approach
void reverseArray(int arr[], int size)
{

    // pointer for start and end index
    int start = 0, end = size - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        // swap(arr[start],arr[end]); // Or simply use the builtin swap functions
        start++;
        end--;
    }
}

int main()
{
    // pass by reference
    int array[] = {1, 3, 4};

    for (int i = 0; i < 3; i++)
    {
        // code
        cout << array[i] << endl;
    }

    changeArr(array, 3);

    // this changes is done on the array will update the original value
    // this is because the array is implicitly passed by reference that is the values are not copied for the function but the address of the first index is sent so the original memory is changed

    // the name of the array is implicitly stored as pointer

    for (int i = 0; i < 3; i++)
    {
        // code
        cout << array[i] << endl;
    }

    // reverse the array
    // this is done by swapping the last and first element then second and second last value are swapped and so on

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / 4;

    reverseArray(arr, size);
    cout << "Reversed Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}