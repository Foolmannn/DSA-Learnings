#include <iostream>
using namespace std;
// Kadanes Algorithm
/*
+ve + +ve  value +
-ve + +ve value +
+ve + -ve value -ve

as -ve value will just decrease the sum so we reset it to 0 
this is main approach 
*/

int kadane(int arr[], int n)
{
    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);

        if (currSum < 0)
        {
            currSum = 0;
        }
    }

    return maxSum;
}
int main()
{

    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum Subarray Sum: " << kadane(arr, n);

    return 0;

}