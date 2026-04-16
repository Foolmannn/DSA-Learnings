 Arrays are one of the most fundamental and heavily used data structures like stacks, queues, trees .

---

# 🔷 1. What is an Array? (General DSA Concept)

An **array** is a **linear data structure** that stores elements of the **same data type** in **contiguous memory locations**.

### Key properties:

* Fixed size (in most languages like C++)
* Same data type (homogeneous)
* Direct access using index (O(1) access time)

👉 Think of it like:

```
Index:   0   1   2   3   4
Array:  [10, 20, 30, 40, 50]
```

---

# 🔷 2. Why Arrays are Important in DSA

Arrays are:

* The **base structure** for many algorithms
* Used in:

  * Sorting (bubble, merge, quick sort)
  * Searching (binary search)
  * Dynamic Programming
  * Sliding window techniques

If you master arrays → you're already halfway into DSA.

---

# 🔷 3. Memory Representation (Very Important)

Array elements are stored in **contiguous memory**.

### Address formula:

If:

* Base address = B
* Size of each element = W bytes
* Index = i

Then:

```
Address of A[i] = B + (i × W)
```

👉 This is why **random access is O(1)** — no traversal needed.

---

# 🔷 4. Operations on Arrays

### 1. Access

* `arr[i]`
* Time: O(1)

### 2. Traversal

* Visiting all elements
* Time: O(n)

### 3. Insertion

* At end → O(1)
* At middle → O(n) (shifting required)

### 4. Deletion

* Also O(n) due to shifting

### 5. Searching

* Linear search → O(n)
* Binary search (sorted array) → O(log n)

---

# 🔷 5. Types of Arrays

### 1. 1D Array

```
int arr[5];
```

### 2. 2D Array (Matrix)

```
int arr[3][3];
```

### 3. Multi-dimensional arrays

---

# 🔷 6. Arrays in C++ (Important for You)

## 🔹 Declaration

```cpp
int arr[5]; // size 5
```

## 🔹 Initialization

```cpp
int arr[5] = {1, 2, 3, 4, 5};
```

or

```cpp
int arr[] = {1, 2, 3}; // size auto-detected
```

---

## 🔹 Accessing Elements

```cpp
cout << arr[0]; // first element
```

---

## 🔹 Traversing Array

```cpp
for(int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}
```

---

## 🔹 Input from User

```cpp
int arr[5];
for(int i = 0; i < 5; i++) {
    cin >> arr[i];
}
```

---

# 🔷 7. Important Concepts in C++ Arrays

## 🔸 1. Indexing starts from 0

* First element → index 0
* Last element → index n-1

---

## 🔸 2. Fixed Size Problem

```cpp
int arr[5];
```

* You cannot increase size later ❌

👉 Solution later → vectors (dynamic arrays)

---

## 🔸 3. Arrays are passed by reference (important!)

```cpp
void func(int arr[]) {
    arr[0] = 100;
}
```

Changes affect original array.

---

## 🔸 4. Array name = pointer

```cpp
arr == &arr[0]
```

---

## 🔸 5. Out of Bound Access (Danger ⚠️)

```cpp
arr[10]; // undefined behavior
```

C++ does NOT check bounds.

---

# 🔷 8. 2D Arrays in C++

## Declaration

```cpp
int arr[2][3];
```

## Initialization

```cpp
int arr[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

## Traversal

```cpp
for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 3; j++) {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
```

---

# 🔷 9. Advantages of Arrays

✅ Fast access (O(1))
✅ Easy to use
✅ Memory efficient (no extra overhead)

---

# 🔷 10. Disadvantages

❌ Fixed size
❌ Insertion/deletion costly
❌ Wasted memory (if not fully used)

---



---

## 🔷 How array is passed in C++

👉 **Arrays are passed as pointers (by reference)**

### Example:

```cpp
void func(int arr[]) {
    arr[0] = 100;
}
```

```cpp
int main() {
    int arr[3] = {1, 2, 3};
    func(arr);
    cout << arr[0]; // 100
}
```

---

## 🔷 What actually happens

When you pass an array:

```cpp
func(arr);
```

👉 It becomes:

```cpp
func(&arr[0]); // address of first element
```

So inside function:

```cpp
arr == pointer to first element
```

---

## 🔷 Key Points (Exam Ready)

* Array is **NOT copied**
* It is passed as a **pointer**
* Changes inside function **affect original array**

---

## 🔷 Equivalent forms

All are same:

```cpp
void func(int arr[])
void func(int arr[10])
void func(int* arr)
```

---

##  One-line answer

👉 *“In C++, arrays are passed to functions as pointers to their first element, so modifications affect the original array.”*

---


