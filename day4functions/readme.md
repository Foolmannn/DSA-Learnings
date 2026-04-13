# How functions occupie memory 
---

# 🔹 1. Memory Layout of a C++ Program

When your C++ program runs, memory is mainly divided into:

* **Code (Text) Segment** → stores compiled functions
* **Stack** → function calls + local variables
* **Heap** → dynamic memory (`new`, `malloc`)
* **Global/Static Segment** → global & static variables

👉 For functions, the **stack** is the most important.

---

# 🔹 2. What Happens When a Function is Called?

Example:

```cpp
#include <iostream>
using namespace std;

void func(int x) {
    int y = x + 10;
    cout << y << endl;
}

int main() {
    int a = 5;
    func(a);
}
```

### Step-by-step in memory:

### ✅ Step 1: `main()` starts

* Stack frame created for `main`
* Variable `a = 5` stored in stack

```
Stack:
| a = 5 |
| main() frame |
```

---

### ✅ Step 2: `func(a)` is called

A **new stack frame** is created for `func`

* `x` gets value of `a` (copy)
* `y` is created inside `func`

```
Stack:
| y = 15 |
| x = 5  |
| func() frame |
----------------
| a = 5  |
| main() frame |
```

---

### ✅ Step 3: Function finishes

* `func()` stack frame is **destroyed**
* Control goes back to `main`

```
Stack:
| a = 5 |
| main() frame |
```

---

# 🔹 3. Stack Frame (Activation Record)

Each function call creates a **stack frame**, which contains:

* Parameters (`x`)
* Local variables (`y`)
* Return address (where to go back)
* Sometimes saved registers

---

# 🔹 4. Key Concepts for DSA

## 🔸 1. Pass by Value (default)

```cpp
void change(int x) {
    x = 100;
}
```

* Copy of variable is passed
* Original variable is unchanged

---

## 🔸 2. Pass by Reference

```cpp
void change(int &x) {
    x = 100;
}
```

* No copy → same memory used
* Original variable changes

---

## 🔸 3. Recursion (VERY IMPORTANT 🔥)

Example:

```cpp
void fun(int n) {
    if(n == 0) return;
    fun(n-1);
}
```

Memory looks like:

```
fun(3)
fun(2)
fun(1)
fun(0)
```

Stack grows:

```
| fun(0) |
| fun(1) |
| fun(2) |
| fun(3) |
```

👉 This is why **stack overflow happens** in deep recursion.

---

# 🔹 5. Important Observations

### ✅ 1. Functions are stored in Code Segment

* Only one copy exists

### ✅ 2. Variables are in Stack

* Created and destroyed dynamically

### ✅ 3. Stack is LIFO

* Last function called → first to return

---

# 🔹 6. Visualization Summary

```
Memory:

[ Code Segment ]
   func(), main()

[ Stack ]
   func() ← active
   main()

[ Heap ]
   (dynamic memory)

[ Global ]
   global variables
```

---

# 🔹 7. Why This Matters in DSA

Understanding this helps you:

* Avoid **stack overflow (recursion)**
* Optimize **space complexity**
* Debug segmentation faults
* Understand **pointer behavior**
* Master **recursion & backtracking**

---

# 🔹 8. Pro Tip (Very Important)

👉 If your recursion depth ≈ 10⁵ → **stack overflow risk**

👉 Use:

* Iteration (loop)
* Or increase stack size (advanced)

---

