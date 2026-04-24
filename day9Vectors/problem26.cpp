// 26. Remove Duplicates from Sorted Array
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Hint
// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

// Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates, return the number of unique elements k.

// The first k elements of nums should contain the unique numbers in sorted order. The remaining elements beyond index k - 1 can be ignored.

// MY SOLUTION 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int filler = 1000;
        int count = 0;
//         for (int i = 0; i < n ; i++) { this will cause the issue of overflow
//     if (nums[i] == nums[i + 1]) {
//         nums[i] = filler;
//     }
// }
// When i == n - 1, you are doing:

// nums[n - 1] == nums[n]   // ❌ nums[n] is invalid
        for (int i = 0; i < n-1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums[i] = filler;
            }
            // sort(nums.begin(), nums.end());
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {

            cout << nums[i] << ",";

            if (nums[i] != 1000) {
                count++;
            }
        }

        return count;
    }
};

//Correct & Optimal Solution (Two Pointers)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Edge case: if array is empty, no elements → return 0
        if (nums.size() == 0) return 0;

        // 'i' will track the index of the last unique element found
        // Initially, first element is always unique
        int i = 0;

        // Start from second element and scan the array
        for (int j = 1; j < nums.size(); j++) {

            // If current element is different from last unique element
            if (nums[j] != nums[i]) {

                // Move 'i' forward (next position for unique element)
                i++;

                // Place the new unique element at index 'i'
                nums[i] = nums[j];
            }
            // If equal → duplicate → skip it (do nothing)
        }

        // Number of unique elements = index + 1
        // because index starts from 0
        return i + 1;
    }
};