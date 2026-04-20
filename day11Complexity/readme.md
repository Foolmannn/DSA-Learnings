Time complexity is one of the **most important concepts in DSA**, especially when you’re coding in C++. Let’s go step by step and build a *solid, interview-level understanding*.

---

# 🔹 1. What is Time Complexity?

Time complexity tells you:

> **How the runtime of your program grows as input size (n) increases**

It does **NOT** measure exact time (seconds), because that depends on:

* CPU
* Compiler
* Machine

Instead, we measure **growth rate**.

---

# 🔹 2. Why it matters

Imagine:

* n = 10 → everything feels fast
* n = 1,000,000 → bad algorithm = 💀 slow

👉 So we compare algorithms using time complexity to choose the most efficient one.

---

# 🔹 3. Big-O Notation

We express time complexity using **Big-O (O)**.

It represents the **worst-case scenario**.

### Common complexities:

| Complexity | Name              | Example              |
| ---------- | ----------------- | -------------------- |
| O(1)       | Constant          | Access array element |
| O(log n)   | Logarithmic       | Binary search        |
| O(n)       | Linear            | Loop                 |
| O(n log n) | Efficient sorting | Merge sort           |
| O(n²)      | Quadratic         | Nested loops         |
| O(2ⁿ)      | Exponential       | Recursion (subsets)  |

---

# 🔹 4. Basic Examples in C++

## ✅ O(1) — Constant Time

```cpp
int getFirst(vector<int>& arr) {
    return arr[0];
}
```

👉 Always same time, no matter `n`

---

## ✅ O(n) — Linear Time

```cpp
for(int i = 0; i < n; i++) {
    cout << arr[i];
}
```

👉 Runs `n` times

---

## ✅ O(n²) — Quadratic Time

```cpp
for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        cout << i << j;
    }
}
```

👉 Runs `n * n`

---

## ✅ O(log n) — Logarithmic Time

Example: Binary Search

```cpp
int binarySearch(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
```

👉 Each step halves the search space

---

# 🔹 5. How to Calculate Time Complexity

## Rule 1: Ignore constants

```cpp
for(int i = 0; i < n; i++)   // O(n)
for(int i = 0; i < 2*n; i++) // also O(n)
```

---

## Rule 2: Nested loops → multiply

```cpp
for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        // O(n²)
    }
}
```

---

## Rule 3: Sequential loops → add

```cpp
for(int i = 0; i < n; i++) {}   // O(n)
for(int i = 0; i < n; i++) {}   // O(n)

Total = O(n + n) = O(n)
```

---

## Rule 4: Drop lower terms

```cpp
O(n² + n + 10) → O(n²)
```

👉 Only dominant term matters

---

# 🔹 6. Best, Average, Worst Case

Example: Linear Search

```cpp
for(int i = 0; i < n; i++) {
    if(arr[i] == target) return i;
}
```

| Case    | Time |
| ------- | ---- |
| Best    | O(1) |
| Average | O(n) |
| Worst   | O(n) |

---

# 🔹 7. Space vs Time Tradeoff

Sometimes faster algorithms use more memory.

Example:

* Hash map → O(1) lookup
* But uses extra space

---

# 🔹 8. Important Patterns (Very Useful for DSA)

### 🔸 Pattern 1: Two pointers → O(n)

```cpp
int left = 0, right = n - 1;
while(left < right) {
    left++;
    right--;
}
```

---

### 🔸 Pattern 2: Divide & Conquer → O(log n) or O(n log n)

Example:

* Merge Sort → O(n log n)
* Binary Search → O(log n)

---

### 🔸 Pattern 3: Recursion

```cpp
int f(int n) {
    if(n == 0) return 1;
    return f(n - 1);
}
```

👉 O(n)

---

### 🔸 Pattern 4: Exponential

```cpp
int fib(int n) {
    if(n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
```

👉 O(2ⁿ) ❌ very slow

---

# 🔹 9. Real-world Comparison

| n    | O(n) | O(n²)     |
| ---- | ---- | --------- |
| 10   | 10   | 100       |
| 100  | 100  | 10,000    |
| 1000 | 1000 | 1,000,000 |

👉 That’s why O(n²) is dangerous for large inputs.

---

# 🔹 10. Golden Rule for DSA

👉 Always aim for:

* O(1) or O(log n) → best
* O(n) → acceptable
* O(n²) → avoid for large n
* O(2ⁿ) → only for small inputs

---

# 🔹 11. Quick Cheat Sheet

| Code Pattern        | Complexity |
| ------------------- | ---------- |
| Single loop         | O(n)       |
| Nested loop         | O(n²)      |
| Halving loop        | O(log n)   |
| Recursion (tree)    | O(2ⁿ)      |
| Sorting (best ones) | O(n log n) |

---

# 🔥 Final Insight (Important)

Time complexity is not about code length.

👉 It’s about **how many operations grow with input size**.

---

