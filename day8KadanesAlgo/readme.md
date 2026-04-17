Kadane’s Algorithm is one of the most important algorithms in array-based DSA. It is used to solve:

 **Maximum Subarray Sum Problem**
(i.e., find the contiguous subarray with the largest sum)

---

## 💡 Idea (Intuition)

Instead of checking all subarrays (which is O(n²)), Kadane’s algorithm works in **O(n)** by deciding at each step:

👉 “Should I extend the current subarray or start a new one?”

---

## ⚙️ Core Logic

At each element:

* Add it to the current sum
* If the current sum becomes negative → reset it to 0

We also keep track of the **maximum sum seen so far**

---

## 🧠 Algorithm Steps

1. Initialize:

   ```
   maxSum = INT_MIN
   currSum = 0
   ```

2. Traverse the array:

   ```
   for each element:
       currSum += arr[i]
       maxSum = max(maxSum, currSum)

       if(currSum < 0)
           currSum = 0
   ```

---

## 💻 C++ Code

```cpp
#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[], int n) {
    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i = 0; i < n; i++) {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);

        if(currSum < 0) {
            currSum = 0;
        }
    }

    return maxSum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Maximum Subarray Sum: " << kadane(arr, n);

    return 0;
}
```

---

## 🧪 Example

Array:

```
[-2, 1, -3, 4, -1, 2, 1, -5, 4]
```

👉 Maximum subarray:

```
[4, -1, 2, 1]
```

👉 Output:

```
6
```

---

## ⚠️ Important Edge Case

If all numbers are **negative**, the basic version fails.

### ✅ Fix:

Initialize:

```
currSum = arr[0]
maxSum = arr[0]
```

and update like:

```cpp
currSum = max(arr[i], currSum + arr[i]);
maxSum = max(maxSum, currSum);
```

---

## 🔥 Optimized Version (Handles All Cases)

```cpp
int kadane(int arr[], int n) {
    int currSum = arr[0];
    int maxSum = arr[0];

    for(int i = 1; i < n; i++) {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}
```

---

## ⏱️ Complexity

* **Time:** O(n)
* **Space:** O(1)

---
