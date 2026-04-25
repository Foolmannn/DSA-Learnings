#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int st = 0, end = arr.size() - 1;

    while (st <= end) {
        // Safe mid calculation
        int mid = st + (end - st) / 2;

        // Case 1: Found target
        if (arr[mid] == target) {
            return mid;
        }

        // Case 2: Target is on right side
        else if (arr[mid] < target) {
            st = mid + 1;
        }

        // Case 3: Target is on left side
        else {
            end = mid - 1;
        }
    }

    // Target not found
    return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int target = 7;

    int result = binarySearch(arr, target);

    if (result != -1)
        cout << "Found at index: " << result;
    else
        cout << "Not found";

    return 0;
}