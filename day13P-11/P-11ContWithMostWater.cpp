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