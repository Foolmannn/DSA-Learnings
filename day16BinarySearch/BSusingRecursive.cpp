#include <iostream>
#include <vector>
using namespace std;

int binarySearchRec(vector<int>& arr, int st, int end, int target) {
    if (st > end) return -1;

    int mid = st + (end - st) / 2;

    if (arr[mid] == target) return mid;

    if (arr[mid] < target)
        return binarySearchRec(arr, mid + 1, end, target);
    else
        return binarySearchRec(arr, st, mid - 1, target);
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