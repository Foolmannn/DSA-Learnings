This is the classic **Two Pointer technique** for a **sorted array**. Here’s the clean logic behind it.

---

##  Core Idea

Because the array is **sorted**, you can decide how to move pointers based on whether your sum is too small or too large.

---

##  Step-by-step Algorithm

1. **Initialize two pointers**

   * `left = 0` → smallest element
   * `right = n - 1` → largest element

2. **Loop while `left < right`**

   * Compute:

     ```
     sum = arr[left] + arr[right]
     ```

3. **Compare with target `t`**

   * If `sum == t`
     👉 Found the pair → return indices `{left, right}`

   * If `sum < t`
     👉 Sum is too small → increase it
     👉 Move `left++` (go to bigger value)

   * If `sum > t`
     👉 Sum is too large → decrease it
     👉 Move `right--` (go to smaller value)

4. **If loop ends**

   * No pair exists → return empty `{}`

---

##  Why this works

* Sorted array means:

  * Moving `left` → increases sum
  * Moving `right` → decreases sum
* So each step **eliminates a lot of useless combinations**
* That’s why it's **O(n)** instead of O(n²)

---

##  Dry Run Example

```
arr = {1, 3, 5, 6, 8, 9}
target = 11
```

| left  | right | sum | action             |
| ----- | ----- | --- | ------------------ |
| 0 (1) | 5 (9) | 10  | too small → left++ |
| 1 (3) | 5 (9) | 12  | too big → right--  |
| 1 (3) | 4 (8) | 11  | ✅ found            |

Result → `{1, 4}`

---

##  Key Insight (Important for interviews)

You’re not checking all pairs—you’re **using order to eliminate half the search space every step**.

---

##  When this fails

* If array is **not sorted** → this logic breaks
* Then you need:

  * sorting first OR
  * hashmap approach

---


