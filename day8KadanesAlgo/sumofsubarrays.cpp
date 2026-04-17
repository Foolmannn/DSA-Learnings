#include <iostream>
using namespace std;

int main() {
//Brute force algorithm for Finding the maximum sum of the subarrays
// Here we add the each subarrays 
// But we add slight improvement but just reusing the previous sum for the same starting point having subarrays 

int n=5;
int arr[5]={1,2,3,4,5};
int maxSum= INT_MIN;

for(int st=0; st<n;st++){
    int currSum=0;
    for(int end= st; end<n; end++){
      currSum += arr[end];
      maxSum = max(currSum,maxSum);
    }
}
cout<< "Maximum sum of subarrays: "<< maxSum;

    return 0;
}