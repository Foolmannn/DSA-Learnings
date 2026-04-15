# 🔹 1. What is Scope?

**Scope** means the **region of a program where a variable is accessible (visible).**

👉 In simple words:
“Where can I use this variable?”

---

# 🔹 2. Types of Scope in C++

---

## 🟢 1. Local Scope (Block Scope)

A variable declared inside `{ }` is **only accessible inside that block**.

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10; // local to main

    if (true) {
        int y = 20; // local to this block
        cout << x << " " << y << endl;
    }

    // cout << y; ❌ ERROR (y not accessible here)
}
```

👉 `y` exists only inside the `if` block.

---

## 🟢 2. Global Scope

A variable declared **outside all functions** is global.

```cpp
#include <iostream>
using namespace std;

int x = 100; // global variable

int main() {
    cout << x;
}
```

👉 Accessible **anywhere in the program**

---

## 🟢 3. Function Scope

Variables declared inside a function are only accessible **within that function**.

```cpp
void func() {
    int x = 5;
}

int main() {
    // cout << x; ❌ ERROR
}
```

---

## 🟢 4. Block Scope (Loops & Conditions)

Applies to loops like `for`, `while`, `if`

```cpp
for(int i = 0; i < 5; i++) {
    cout << i;
}

// cout << i; ❌ ERROR
```

---

# 🔹 3. Variable Shadowing (IMPORTANT)

When a local variable **hides** a global variable.

```cpp
int x = 10; // global

int main() {
    int x = 20; // local shadows global
    cout << x; // 20
}
```

👉 To access global variable:

```cpp
cout << ::x; // 10
```

---

# 🔹 4. Lifetime vs Scope

👉 Scope = where variable is accessible
👉 Lifetime = how long it exists in memory

---

# 🔹 5. Static Variables (Special Case)

```cpp
void func() {
    static int x = 0;
    x++;
    cout << x << endl;
}
```

👉 Output:

```
1
2
3
```

✔ Keeps value between function calls

---

# 🔥 6. Common Mistakes

❌ Using variable outside its scope
❌ Confusing global and local variables
❌ Shadowing unintentionally

---

# 🔹 7. Quick Summary

| Type     | Accessible Where  |
| -------- | ----------------- |
| Local    | Inside block `{}` |
| Global   | Whole program     |
| Function | Inside function   |
| Block    | Inside loops/if   |

---

# 🔥 Pro Tips (DSA & Interviews)

* Prefer **local variables** (safer, no conflicts)
* Avoid too many **global variables**
* Always watch **shadowing bugs**

---

**Data Type Modifiers in C++** 

---

# 🔹 1. What are Data Type Modifiers?

**Modifiers** are keywords used to **change the size, range, or behavior** of basic data types.

👉 They are mainly used with:

* `int`
* `char`
* (sometimes `double`)

---

# 🔹 2. Types of Modifiers

There are **4 main modifiers**:

---

## 🟢 1. `signed`

👉 Allows both **positive and negative values**

```cpp
signed int x = -10;
```

✔ Default for most types is already **signed**

---

## 🟢 2. `unsigned`

👉 Allows only **positive values (0 and above)**
✔ Gives a **larger positive range**

```cpp
unsigned int x = 10;
```

---

### 🔸 Example:

```cpp
unsigned int x = -5;
cout << x;
```

👉 Output:

```
Large positive number (due to wrap-around)
```

---

## 🟢 3. `short`

👉 Reduces memory size → smaller range

```cpp
short int x = 100;
```

✔ Typically uses **2 bytes**

---

## 🟢 4. `long`

👉 Increases memory size → larger range

```cpp
long int x = 100000;
long long int y = 10000000000;
```

✔ `long long` is very important in DSA

---

# 🔹 3. Combined Modifiers

You can combine them:

```cpp
unsigned long int x;
long long int y;
unsigned short int z;
```

---

# 🔹 4. Size & Range (Important Table)

| Type            | Size (approx) | Range      |
| --------------- | ------------- | ---------- |
| `short int`     | 2 bytes       | ±32K       |
| `int`           | 4 bytes       | ±2B        |
| `long int`      | 4/8 bytes     | large      |
| `long long int` | 8 bytes       | very large |
| `unsigned int`  | 4 bytes       | 0 to ~4B   |

---

# 🔹 5. Important Notes

✔ `unsigned` removes negative range → doubles positive range
✔ `long long` is widely used in **competitive programming**
✔ Size may vary depending on compiler/system

---

# 🔥 6. DSA Tips (VERY IMPORTANT)

### ✅ Use `long long` when:

* Numbers > (10^9)
* Factorials
* Large sums

```cpp
long long sum = 0;
```

---

### ✅ Avoid overflow

```cpp
int x = 100000 * 100000; // ❌ overflow
```

✔ Correct:

```cpp
long long x = 100000LL * 100000;
```

---

# 🔹 7. Common Mistakes

❌ Mixing signed and unsigned
❌ Ignoring overflow
❌ Assuming size is same everywhere

---

# 🔥 Quick Summary

| Modifier | Purpose        |
| -------- | -------------- |
| signed   | + and - values |
| unsigned | only + values  |
| short    | smaller size   |
| long     | larger size    |

---

