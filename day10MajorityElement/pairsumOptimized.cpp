// pair sum
// return pair in sorted array with target sum

#include <iostream>
#include <vector>
using namespace std;

/* Since array is SORTED → Use Two Pointer (Better)
Problem says sorted array, so brute force is not ideal.

 Optimal: O(n)
*/
vector<int> pairsum(vector<int> nums, int s, int t)
{
    vector<int> ans;
    int i = 0, j = s - 1;
    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum > t)
        {
            j--;
        }
        else if (pairSum < t)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
return {};
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    int n = nums.size();
    vector<int> ans = pairsum(nums, n, target);
    if (ans.size() >= 2)
        cout << ans[0] << "," << ans[1];
    else
        cout << "No pair found";
    return 0;
}