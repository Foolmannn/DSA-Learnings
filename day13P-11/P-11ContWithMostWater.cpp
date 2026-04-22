// Container with most water Problem 11

//Brute force : THis will give time limit exceeded 
class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int heig = INT_MIN;
        int width = 0;
        int n = height.size();
        for (int i = 0; i < n-1; i++) {
                // heig = height[i];
            for (int j = 1; j < n; j++) {
                heig=min(height[i],height[j]);
                width = abs(j-i);
                area = max(area, heig * width);
                // cout<<area;
            }
     
        }
        return area;
    }
};



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

// Cleaner and better with same two pointer approach 
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int area = 0;

        while (left < right) {
            area = max(area, min(height[left], height[right]) * (right - left));

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return area;
    }
};