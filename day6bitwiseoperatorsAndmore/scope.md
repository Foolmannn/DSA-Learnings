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

