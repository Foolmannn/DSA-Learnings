// If all numbers are negative, the basic version fails.So we use this improved approach 

int kadane(int arr[], int n) {
    int currSum = arr[0];
    int maxSum = arr[0];

    for(int i = 1; i < n; i++) {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}