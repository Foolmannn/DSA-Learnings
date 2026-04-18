
---

## 🔹 STL (Standard Template Library) in C++

**STL** is a collection of **ready-made classes and functions** in C++ that help you write efficient code quickly.

### 📦 Main parts of STL:

1. **Containers** → store data

   * `vector`, `list`, `set`, `map`, etc.

2. **Algorithms** → operations on data

   * `sort()`, `binary_search()`, `reverse()`

3. **Iterators** → pointers to traverse containers

   * `begin()`, `end()`

👉 In short:
**STL = Data structures + Algorithms + Iterators (all built-in)**

---
---

# 🔷 What is a Vector?

A **vector** is a **dynamic array** provided by STL.

👉 Key idea:

* Array → fixed size
* Vector → **resizable automatically**

```cpp
#include <vector>
using namespace std;

vector<int> v;
```

---

# 🔷 How Vector Works Internally

A vector uses a **contiguous memory block** (like an array).

👉 When it gets full:

* It **allocates a bigger memory block**
* Copies old elements
* Deletes old memory

This is why:

* `push_back()` is **O(1)** (average)
* Sometimes **O(n)** (when resizing happens)

---

# 🔷 Important Functions

## 1. Adding Elements

```cpp
v.push_back(10);
v.emplace_back(20); // faster (constructs in-place)
```

---

## 2. Removing Elements

```cpp
v.pop_back(); // removes last element
```

---

## 3. Accessing Elements

```cpp
v[0];        // fast, no check
v.at(0);     // safe (bounds checked)
```

---

## 4. Size & Capacity

```cpp
v.size();      // number of elements
v.capacity();  // allocated memory
```

👉 Example:

```cpp
vector<int> v;
v.push_back(1); // capacity may become 1
v.push_back(2); // capacity may become 2
v.push_back(3); // capacity may become 4
```

---

## 5. Resize & Reserve

```cpp
v.resize(5);    // change size
v.reserve(100); // reserve memory (optimization)
```

👉 `reserve()` avoids multiple reallocations → faster

---

## 6. Insert & Erase

```cpp
v.insert(v.begin(), 100);      // insert at beginning
v.erase(v.begin());            // delete first element
v.erase(v.begin(), v.begin()+2); // delete range
```

---

## 7. Clear

```cpp
v.clear(); // removes all elements
```

---

# 🔷 Iterators in Vector

Iterators act like pointers.

```cpp
vector<int>::iterator it;

for(it = v.begin(); it != v.end(); it++){
    cout << *it << " ";
}
```

👉 Modern way:

```cpp
for(auto x : v){
    cout << x << " ";
}
```

---

# 🔷 Types of Vectors

## 1. 2D Vector

```cpp
vector<vector<int>> v(3, vector<int>(4, 0));
```

👉 3 rows, 4 columns

---

## 2. Vector of Pairs

```cpp
vector<pair<int,int>> v;
v.push_back({1,2});
```

---

# 🔷 Time Complexity

| Operation       | Complexity |
| --------------- | ---------- |
| Access          | O(1)       |
| push_back       | O(1)*      |
| pop_back        | O(1)       |
| insert (middle) | O(n)       |
| erase           | O(n)       |

👉 *Amortized O(1)

---

# 🔷 Vector vs Array

| Feature   | Array  | Vector    |
| --------- | ------ | --------- |
| Size      | Fixed  | Dynamic   |
| Memory    | Manual | Automatic |
| Functions | No     | Yes       |
| Safety    | Less   | More      |

---

# 🔷 Common Mistakes

❌ Accessing out of bounds:

```cpp
v[10]; // crash possible
```

❌ Forgetting reserve (for large data)

❌ Using insert/erase frequently in middle (slow)

---

# 🔷 When to Use Vector?

Use vector when:

* Size is unknown
* Need dynamic resizing
* Need STL algorithms

Avoid when:

* Too many insertions in middle → use `list`

---

# 🔷 Interview Insight

👉 Most asked:

* Difference between `size()` and `capacity()`
* Why push_back is amortized O(1)
* Difference between `vector` and `array`

---
