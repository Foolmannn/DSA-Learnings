// pair sum
// return pair in sorted array with target sum

#include <iostream>
#include <vector>
using namespace std;

// Brute force approach: O(n^2)

vector<int> pairsum(int arr[],int s, int t)
{
    vector<int> ans = {};
    for (int i = 0; i < s; i++)
    {
        for (int j = 1; j < s; j++)
        {
            if ((arr[i] + arr[j]) == t)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 3, 5, 6, 8, 9};
    int target = 11;
        int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> ans= pairsum(arr, n,target);
cout<<ans[0]<<ans[1];
    return 0;
}