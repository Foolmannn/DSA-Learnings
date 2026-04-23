

```cpp
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        // This will store the final result
        vector<int> answer(n, 1);

        // prefix[i] will store product of all elements BEFORE index i
        vector<int> prefix(n, 1);

        // suffix[i] will store product of all elements AFTER index i
        vector<int> suffix(n, 1);

        // Build prefix array
        // prefix[i] = nums[0] * nums[1] * ... * nums[i-1]
        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        // Build suffix array
        // suffix[i] = nums[i+1] * nums[i+2] * ... * nums[n-1]
        for(int i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }

        // Final answer: product of prefix and suffix
        // answer[i] = product of all elements except nums[i]
        for(int i = 0; i < n; i++) {
            answer[i] = prefix[i] * suffix[i];
        }

        return answer;
    }
};
```

---

## 🔍 Intuition (Important)

For each index `i`, instead of multiplying all elements except itself (which would be O(n²)), you:

* Take product of **everything before it** → `prefix[i]`
* Take product of **everything after it** → `suffix[i]`
* Multiply both → gives result

---

## ⏱ Time Complexity

* Building prefix array → **O(n)**
* Building suffix array → **O(n)**
* Building answer array → **O(n)**

👉 **Total Time Complexity = O(n)**

---

## 💾 Space Complexity

* `prefix` array → O(n)
* `suffix` array → O(n)
* `answer` array → O(n)

👉 **Total Space Complexity = O(n)**

---

## ⚡ Optimization Tip (Important for interviews)

You can actually reduce space complexity to **O(1)** (excluding output array) by:

* Using `answer` as prefix
* Keeping a variable for suffix instead of array

Your current approach is already optimal in **time (O(n))**, but yes — we can **reduce space from O(n) → O(1)** (excluding the output array, which doesn’t count in most interview settings).

The trick is:

* Use the `answer` array itself to store **prefix products**
* Then traverse from right while maintaining a **single suffix variable**

---

## ✅ Optimized Code (O(1) extra space)

```cpp
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        // This will store the final result
        vector<int> answer(n, 1);

        // Step 1: Store prefix products directly in answer
        // answer[i] = product of all elements before i
        for(int i = 1; i < n; i++) {
            answer[i] = answer[i - 1] * nums[i - 1];
        }

        // Step 2: Traverse from right and multiply with suffix
        int suffix = 1;  // stores product of elements after i

        for(int i = n - 1; i >= 0; i--) {
            answer[i] = answer[i] * suffix;  // combine prefix & suffix
            suffix *= nums[i];               // update suffix
        }

        return answer;
    }
};
```

---

## 🔍 How this works

* First loop:

  * Builds prefix inside `answer`
  * Example: `[1, a, a*b, a*b*c, ...]`

* Second loop:

  * Maintains `suffix` dynamically
  * Multiplies it into `answer[i]`

---

## ⏱ Time Complexity

👉 **O(n)** (two passes)

---

## 💾 Space Complexity

* No extra arrays used
* Only one variable `suffix`

👉 **O(1)** (excluding output array)

---

## ⚡ Why this is better

* Saves memory
* Cleaner and more interview-friendly
* Same performance, less space

---

