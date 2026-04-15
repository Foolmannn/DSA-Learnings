**Operator Precedence in C++** 

---

# 🔹 1. What is Operator Precedence?

**Operator precedence** decides **which operation is performed first** in an expression.

👉 Example:

```cpp
int x = 2 + 3 * 4;
```

👉 Output:

```
x = 14
```

✔ Because `*` has higher precedence than `+`

---

# 🔹 2. Why it is Important?

Without knowing precedence, you may get **wrong answers in DSA problems** ❌

---

# 🔹 3. Precedence Table (High → Low)

| Level | Operators   | Meaning               |            |            |
| ----- | ----------- | --------------------- | ---------- | ---------- |
| 1     | `()`        | Parentheses           |            |            |
| 2     | `++ --`     | Increment / Decrement |            |            |
| 3     | `* / %`     | Multiplication        |            |            |
| 4     | `+ -`       | Addition/Subtraction  |            |            |
| 5     | `<< >>`     | Shift operators       |            |            |
| 6     | `< <= > >=` | Relational            |            |            |
| 7     | `== !=`     | Equality              |            |            |
| 8     | `&`         | Bitwise AND           |            |            |
| 9     | `^`         | Bitwise XOR           |            |            |
| 10    | `           | `                     | Bitwise OR |            |
| 11    | `&&`        | Logical AND           |            |            |
| 12    | `           |                       | `          | Logical OR |
| 13    | `=`         | Assignment            |            |            |

---

# 🔹 4. Associativity (VERY IMPORTANT)

When precedence is same → **associativity decides direction**

| Type           | Direction    |
| -------------- | ------------ |
| Most operators | Left → Right |
| Assignment `=` | Right → Left |

---

### 👉 Example 1 (Left → Right)

```cpp
int x = 10 - 5 - 2;
```

👉 Evaluation:

```
(10 - 5) - 2 = 3
```

---

### 👉 Example 2 (Right → Left)

```cpp
int a, b;
a = b = 5;
```

👉 Evaluation:

```
b = 5 → a = 5
```

---

# 🔹 5. Important Examples (DSA Level)

---

### ✅ Example 1

```cpp
int x = 5 + 2 * 3;
```

👉 `*` first:

```
= 5 + 6 = 11
```

---

### ✅ Example 2

```cpp
int x = 5 << 1 + 1;
```

👉 `+` first:

```
= 5 << 2 = 20
```

---

### ✅ Example 3 (Tricky)

```cpp
int x = 10 & 6 == 2;
```

👉 `==` has higher precedence than `&` ❗

So:

```
6 == 2 → false (0)
10 & 0 → 0
```

---

# 🔥 6. Best Practice (IMPORTANT)

👉 Always use **parentheses** to avoid confusion:

```cpp
int x = (10 & 6) == 2; // correct & clear
```

---

# 🔹 7. Common Mistakes

❌ Writing:

```cpp
if(a & b == 0)
```

✔ Correct:

```cpp
if((a & b) == 0)
```

---

# 🔥 Final Tips for DSA

* Bitwise + relational → **very error-prone**
* Always double-check precedence
* Use brackets in contests/interviews

---

