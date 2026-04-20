
---

# 🔹 1. What is Space Complexity?

> **Space complexity = total memory used by an algorithm as input size (n) grows**

It includes:

* Variables
* Data structures
* Function calls (stack)
* Temporary memory

---

# 🔹 2. Two Types of Space

## ✅ 1. Input Space

Memory used to store input.

```cpp
vector<int> arr(n);
```

👉 This is **NOT counted** in most cases (because input is given).

---

## ✅ 2. Auxiliary Space (IMPORTANT)

Extra memory used by the algorithm.

👉 This is what interviewers care about.

---

# 🔹 3. Basic Examples in C++

## ✅ O(1) — Constant Space

```cpp
int sum = 0;
for(int i = 0; i < n; i++) {
    sum += arr[i];
}
```

👉 Only one variable → **O(1)**

---

## ✅ O(n) — Linear Space

```cpp
vector<int> temp(n);
for(int i = 0; i < n; i++) {
    temp[i] = arr[i];
}
```

👉 New array → **O(n)**

---

## ✅ O(n²) — 2D Memory

```cpp
vector<vector<int>> matrix(n, vector<int>(n));
```

👉 n × n → **O(n²)**

---

# 🔹 4. Key Rule

👉 **Space depends on extra memory, NOT loops**

This is where many people get confused.

### ❌ Wrong thinking:

> “Loop runs n times → space is O(n)”

### ✅ Correct:

```cpp
for(int i = 0; i < n; i++) {
    int x = i;
}
```

👉 Only one variable reused → **O(1)**

---

# 🔹 5. Recursion & Stack Space (VERY IMPORTANT)

Each function call uses memory in the **call stack**.

---

## Example: Recursive function

```cpp
int f(int n) {
    if(n == 0) return 0;
    return f(n - 1);
}
```

👉 Calls stack like:

```
f(5)
f(4)
f(3)
f(2)
f(1)
f(0)
```

👉 Total calls = n
👉 Space = **O(n)**

---

## Example: Binary recursion

```cpp
int fib(int n) {
    if(n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
```

👉 Tree grows exponentially
👉 But stack depth = n

👉 Space = **O(n)** (not O(2ⁿ))

---

# 🔹 6. Iterative vs Recursive

## Iterative:

```cpp
for(int i = 0; i < n; i++) {}
```

👉 Space = **O(1)**

---

## Recursive:

```cpp
f(n) → f(n-1)
```

👉 Space = **O(n)**

---

👉 Same logic, different memory usage!

---

# 🔹 7. In-place Algorithms (VERY IMPORTANT)

> **In-place = no extra memory used**

Example:

```cpp
void reverse(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    while(left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}
```

👉 No extra array → **O(1) space**

---

## ❌ Not in-place:

```cpp
vector<int> reverse(vector<int>& arr) {
    vector<int> temp;
    for(int i = arr.size()-1; i >= 0; i--) {
        temp.push_back(arr[i]);
    }
    return temp;
}
```

👉 Uses extra memory → **O(n)**

---

# 🔹 8. Space Complexity in STL (C++)

Some STL structures:

| Structure     | Space |
| ------------- | ----- |
| vector        | O(n)  |
| stack         | O(n)  |
| queue         | O(n)  |
| map           | O(n)  |
| unordered_map | O(n)  |

---

# 🔹 9. Hidden Space Costs

## 🔸 1. Function parameters

```cpp
void func(vector<int> arr)
```

👉 Copies array → **O(n)** space

---

## ✅ Better:

```cpp
void func(vector<int>& arr)
```

👉 No copy → **O(1)** extra space

---

## 🔸 2. Strings

```cpp
string s2 = s1;
```

👉 Copy → O(n)

---

# 🔹 10. Space Optimization Example

## Problem:

Find sum of array

---

### ❌ Bad (O(n) space)

```cpp
vector<int> prefix(n);
prefix[0] = arr[0];
for(int i = 1; i < n; i++) {
    prefix[i] = prefix[i-1] + arr[i];
}
```

---

### ✅ Optimized (O(1) space)

```cpp
int sum = 0;
for(int i = 0; i < n; i++) {
    sum += arr[i];
}
```

---

# 🔹 11. Time vs Space Tradeoff

Sometimes:

| Approach    | Time | Space       |
| ----------- | ---- | ----------- |
| Brute force | Slow | Less memory |
| Optimized   | Fast | More memory |

---

Example:

* HashMap → faster lookup (O(1))
* But uses extra memory

---

# 🔥 12. Golden Rules (Very Important)

✔ Focus on **auxiliary space**
✔ Ignore input space (mostly)
✔ Recursion = stack space
✔ Loops ≠ extra space
✔ In-place = best (O(1))

---

# 🔹 13. Quick Cheat Sheet

| Pattern           | Space     |
| ----------------- | --------- |
| Variables only    | O(1)      |
| New array         | O(n)      |
| 2D matrix         | O(n²)     |
| Recursion depth n | O(n)      |
| Tree recursion    | O(height) |

---

# 🔥 Final Insight

Most beginners optimize only time.

👉 But top programmers think:

> “Can I reduce BOTH time AND space?”

---

