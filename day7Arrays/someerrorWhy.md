
---

## ❌ Your code:

```cpp
int size = 5;
int marks[size]; // ERROR
```

---

## 🔴 Why this gives an error

In **standard C++**, the size of an array must be a **compile-time constant**.

👉 But here:

```cpp
int size = 5;
```

* `size` is a **variable**
* Its value is known at **runtime**, not compile time

So the compiler says:
❌ “I don’t know the size beforehand”

---

## 🔷 What C++ expects

This works:

```cpp
const int size = 5;
int marks[size]; // ✅ OK
```

👉 Because:

* `const` makes it a **compile-time constant**

---

## 🔷 Important Concept

### ✔ Compile-time vs Runtime

| Type                  | Example            | Allowed in array size? |
| --------------------- | ------------------ | ---------------------- |
| Compile-time constant | `const int n = 5;` | ✅ Yes                  |
| Runtime variable      | `int n; cin >> n;` | ❌ No                   |

---

## 🔷 But wait… sometimes it works?

You might see this working in some compilers (like GCC):

```cpp
int size = 5;
int arr[size]; // sometimes works
```

👉 That’s because of **VLA (Variable Length Arrays)**
⚠️ But:

* Not part of standard C++
* Compiler-specific (non-portable)
* Avoid in exams/interviews

---

## 🔷 Correct Ways to Do This

### ✅ 1. Use `const`

```cpp
const int size = 5;
int marks[size];
```

---

### ✅ 2. Use dynamic memory (DSA important)

```cpp
int size;
cin >> size;

int* marks = new int[size];
```

👉 Don’t forget:

```cpp
delete[] marks;
```

---

### ✅ 3. Best practice → Use vector (recommended)

```cpp
#include <vector>
using namespace std;

int size;
cin >> size;

vector<int> marks(size);
```

👉 Why vector?

* Dynamic size
* Safe
* Used everywhere in DSA

---

## 🔥 Interview-Level Insight

If you write:

```cpp
int arr[n];
```

👉 Interviewer may ask:

* Is `n` compile-time constant?
* Is this standard C++?

Correct answer:

> "No, this is not standard C++. It’s compiler-dependent. Prefer vector."

---

## 🔷 Summary

* ❌ `int marks[size];` → error (size not constant)
* ✅ Use `const int size`
* ✅ Use `new`
* ✅ Best → `vector<int>`

---

