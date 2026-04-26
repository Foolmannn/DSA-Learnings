// 852. Peak Index in a Mountain Array
// Attempted
// Medium
// Topics
// premium lock icon
// Companies
// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

// Return the index of the peak element.

// Your task is to solve it in O(log(n)) time complexity.

 

// Example 1:

// Input: arr = [0,1,0]

// Output: 1

// My code will not works at real life as the index 0 and index last will cause the issue 
#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int st=0,end=arr.size()-1;
    int peak;
    while(st<=end){

        int mid= st+(end-st)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return arr[mid];
        }
        else if(arr[mid]>arr[mid-1]){
            st=mid+1;
        }
        else{
            end=mid-1;

        }

        
    }
    return -1;
}
int main() {

vector<int>vec={0,3,5,6,9,10,4,3,1};
cout<<peakIndexInMountainArray(vec);

    return 0;
}

// We have to prevent the overflow

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        /*
        A mountain array has:
        - Strictly increasing part
        - Then a peak
        - Then strictly decreasing part

        Goal: Find the index of the peak element.

        We use Binary Search because:
        - Left side is increasing
        - Right side is decreasing
        - This pattern allows us to eliminate half of the search space each time
        */

        // We avoid edges because:
        // arr[0] and arr[n-1] can never be peak in a valid mountain array
        int st = 1, end = arr.size() - 2;

        while (st <= end) {

            // Prevent overflow compared to (st + end)/2
            int mid = st + (end - st) / 2;

            /*
            Check if mid is the peak:
            A peak element must be greater than both neighbors
            */
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                return mid;  // Found the peak
            }

            /*
            If we are in the increasing part of the array:
            arr[mid] > arr[mid - 1]

            This means:
            - We are on the left slope of the mountain
            - Peak lies on the right side
            */
            else if (arr[mid] > arr[mid - 1]) {
                st = mid + 1;  // Move right
            }

            /*
            Otherwise:
            arr[mid] < arr[mid - 1]

            This means:
            - We are in the decreasing part
            - Peak lies on the left side
            */
            else {
                end = mid - 1;  // Move left
            }
        }

        /*
        Ideally, this should never happen for a valid mountain array,
        because a peak is guaranteed to exist.
        */
        return -1;
    }
};
