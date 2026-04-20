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


# Majority Element 

Moore’s Voting Algorithm (also called **Boyer–Moore Majority Vote**) is a super efficient way to find the **majority element** in an array — the element that appears **more than ⌊n/2⌋ times**.

---

## 🔑 Core Idea

If an element is the majority, it will **survive cancellation** against all other elements.

Think of it like:

* Every time you see a different element → cancel it out
* Majority element will still remain at the end

---

## ⚙️ Algorithm Steps

### Phase 1: Find Candidate

```cpp
int findCandidate(vector<int>& nums) {
    int candidate = 0, count = 0;

    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }

        if (num == candidate) count++;
        else count--;
    }

    return candidate;
}
```

---

### Phase 2: Verify Candidate (IMPORTANT ⚠️)

The algorithm **only guarantees a candidate**, not correctness.

```cpp
int majorityElement(vector<int>& nums) {
    int candidate = findCandidate(nums);

    int count = 0;
    for (int num : nums) {
        if (num == candidate) count++;
    }

    if (count > nums.size() / 2)
        return candidate;

    return -1; // No majority element
}
```

---

## 🧠 Why It Works

* Majority element appears **more than all others combined**
* So even after cancellations, it remains

---

## ⏱️ Complexity

* Time: **O(n)**
* Space: **O(1)** (no extra memory)

---

## 📌 Example

```
Input: [2,2,1,1,1,2,2]

Process:
candidate changes but final = 2

Output: 2
```

---

## 🚀 Key Insight

This is one of those rare algorithms that:

* Uses **no hashmap**
* Uses **constant space**
* Still solves majority efficiently

---
