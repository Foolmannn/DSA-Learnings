// 238. Product of Array Except Self
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.
// Example 1:

// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]
// Example 2:

// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]


// Brute force Approach 
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n,1);
        for (int i = 0; i < n; i++) {
            int product = 1;
            for (int j = 0; j < n; j++) {
                if (i != j) {

                    product *= nums[j];
                }
            }
            answer[i] = product;
        }
        // cout << answer[2];
        return answer;
    }
};

// Optimized approach 

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        // This will store the final result
        vector<int> answer(n, 1);

        // prefix[i] will store product of all elements BEFORE index i
        vector<int> prefix(n, 1);

        // suffix[i] will store product of all elements AFTER index i
        vector<int> suffix(n, 1);

        // Build prefix array
        // prefix[i] = nums[0] * nums[1] * ... * nums[i-1]
        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        // Build suffix array
        // suffix[i] = nums[i+1] * nums[i+2] * ... * nums[n-1]
        for(int i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }

        // Final answer: product of prefix and suffix
        // answer[i] = product of all elements except nums[i]
        for(int i = 0; i < n; i++) {
            answer[i] = prefix[i] * suffix[i];
        }

        return answer;
    }
};

// Avoiding the extra space complexity 

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        // This will store the final result
        vector<int> answer(n, 1);

        // Step 1: Store prefix products directly in answer
        // answer[i] = product of all elements before i
        for(int i = 1; i < n; i++) {
            answer[i] = answer[i - 1] * nums[i - 1];
        }

        // Step 2: Traverse from right and multiply with suffix
        int suffix = 1;  // stores product of elements after i

        for(int i = n - 1; i >= 0; i--) {
            answer[i] = answer[i] * suffix;  // combine prefix & suffix
            suffix *= nums[i];               // update suffix
        }

        return answer;
    }
};