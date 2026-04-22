

// Better approach is to use the two pointer approach 

class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;                 // stores the maximum area found so far
        int heig = INT_MIN;           // current height (min of two lines)
        int width = 0;                // distance between two pointers

        int n = height.size();        // size of the array

        int left = 0;                // left pointer (start of array)
        int right = n - 1;           // right pointer (end of array)

        // iterate until pointers meet
        for (int i = 0; i < n; i++) {

            // height of container is limited by the shorter line
            heig = min(height[left], height[right]);

            // width is the distance between two lines
            width = right - left;

            // calculate area and update maximum
            area = max(area, heig * width);

            // 🔑 core greedy logic:
            // move the pointer which has smaller height
            // because moving the taller one won't increase area
            if (height[left] < height[right]) {
                left++;     // try to find a taller left boundary
            } else {
                right--;    // try to find a taller right boundary
            }

            // stop when both pointers meet
            if (left == right) {
                break;
            }
        }

        return area;  // return the maximum area found
    }
};