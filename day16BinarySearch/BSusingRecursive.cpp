#include <iostream>
#include <vector>
using namespace std;
// We prefer the iterative approach as the In recursive approach the call stack is being created which will lead to the space complexity is also O(logn) 

// so TC is O(log n ) for both but in iterative the SC is O(1) whcich is better than O(log n ) of the recursive approach 
 
// Recursive Binary Search Function
int binarySearchRec(vector<int>& arr, int st, int end, int target) {
    
    // Base Case:
    // If start index crosses end index, target is not present
    if (st > end) return -1;

    // Calculate mid index safely (avoids overflow)
    int mid = st + (end - st) / 2;

    // Case 1: Target found at mid
    if (arr[mid] == target) return mid;

    // Case 2: Target is greater than mid element
    // So search in right half (mid+1 to end)
    if (arr[mid] < target)
        return binarySearchRec(arr, mid + 1, end, target);

    // Case 3: Target is smaller than mid element
    // So search in left half (start to mid-1)
    else
        return binarySearchRec(arr, st, mid - 1, target);
}

int main() {
    // Sorted array (Binary Search requires sorted data)
    vector<int> arr = {1, 3, 5, 7, 9, 11};

    int target = 7;
    int n = arr.size();

    // Call recursive binary search with full range (indices)
    int result = binarySearchRec(arr, 0, n - 1, target);

    // Output result
    if (result != -1)
        cout << "Found at index: " << result;
    else
        cout << "Not found";

    return 0;
}