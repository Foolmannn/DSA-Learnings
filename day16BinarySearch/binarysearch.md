Binary Search is one of the most important algorithms you’ll use in DSA and interviews. Let’s break it down in a way that actually *sticks*.

---

# 🔍 What is Binary Search?

Binary Search is a technique to **search in a sorted array** by repeatedly dividing the search space into half.

Instead of checking every element (like linear search), it:

* Looks at the **middle**
* Decides whether to go **left or right**
* Cuts the problem size in half every step

---

# ⚡ Core Formula

mid = st + \frac{end - st}{2}

👉 This avoids overflow (very important in interviews)

---

# 🧠 Intuition

Imagine this array:

```
[1, 3, 5, 7, 9, 11, 13]
```

Find `7`:

1. Middle = 7 → found ✅
2. Done in **1 step**

Find `9`:

1. Mid = 7 → go right
2. Mid = 11 → go left
3. Mid = 9 → found ✅

---

# 💻 Binary Search (C++ Code with Comments)

```cpp
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
```

---

# 📊 Time & Space Complexity

| Type  | Value       |
| ----- | ----------- |
| Time  | O(log n) 🚀 |
| Space | O(1)        |

👉 Why O(log n)?
Because you divide the array by 2 each step:

```
n → n/2 → n/4 → n/8 ...
```

---

# 🔁 Iterative vs Recursive

### ✅ Iterative (used above)

* Faster
* No stack overhead
* Preferred in interviews

---

### 🔄 Recursive Version

```cpp
int binarySearchRec(vector<int>& arr, int st, int end, int target) {
    if (st > end) return -1;

    int mid = st + (end - st) / 2;

    if (arr[mid] == target) return mid;

    if (arr[mid] < target)
        return binarySearchRec(arr, mid + 1, end, target);
    else
        return binarySearchRec(arr, st, mid - 1, target);
}
```

---

# ⚠️ Common Mistakes

❌ Using `(st + end) / 2` → overflow risk
❌ Forgetting `st <= end`
❌ Applying on **unsorted array**
❌ Infinite loop (wrong pointer update)

---

# 🔥 Advanced Variations (VERY IMPORTANT)

Binary Search is not just searching — it’s a **pattern**.

You’ll use it in:

* First/Last occurrence
* Lower bound / Upper bound
* Peak element
* Rotated array (your previous question 🔥)
* Search in infinite array
* Binary search on answer (very important)

---

# 🧠 Interview Mindset

Whenever you see:

* **Sorted array**
* **Search / optimize / minimize / maximize**

👉 Think: *“Can I use Binary Search?”*

---


