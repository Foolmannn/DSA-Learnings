

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

If you want, I can show you that optimized version too.
