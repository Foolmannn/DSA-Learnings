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
