// 33. Search in Rotated Sorted Array
// Medium
// Topics
// premium lock icon
// Companies
// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity.


// Solution is that in rotated array has one side sorted always so we can apply binary search in the sorted side 
class Solution {
public:
    int search(vector<int>& nums, int tar) {
        // Initialize start and end pointers
        int st = 0, end = nums.size() - 1;

        // Standard Binary Search loop
        while (st <= end) {

            // Calculate mid safely to avoid overflow
            int mid = st + (end - st) / 2;

            // If target is found at mid, return index
            if (nums[mid] == tar) {
                return mid;
            }

            // Check if LEFT HALF is sorted
            if (nums[st] <= nums[mid]) {

                // If target lies within the sorted left half
                if (nums[st] <= tar && tar <= nums[mid]) {
                    end = mid - 1;   // Search in left half
                } else {
                    st = mid + 1;    // Ignore left half, go right
                }

            } else {
                // Otherwise, RIGHT HALF must be sorted

                // If target lies within the sorted right half
                if (nums[mid] <= tar && tar <= nums[end]) {
                    st = mid + 1;    // Search in right half
                } else {
                    end = mid - 1;   // Ignore right half, go left
                }
            }
        }

        // Target not found
        return -1;
    }
};