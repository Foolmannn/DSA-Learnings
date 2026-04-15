**Bitwise Operators in C++** are used to perform operations directly on the **binary (bit-level) representation** of integers. They are very important in **DSA, optimization, and low-level programming**.

---

## 🔹 List of Bitwise Operators

| Operator | Name             | Description                            |
| -------- | ---------------- | -------------------------------------- |
| `&`      | AND              | Sets bit to 1 if both bits are 1       |
| `\|`     | OR               | Sets bit to 1 if at least one bit is 1 |
| `^`      | XOR              | Sets bit to 1 if bits are different    |
| `~`      | NOT (Complement) | Inverts all bits                       |
| `<<`     | Left Shift       | Shifts bits to the left                |
| `>>`     | Right Shift      | Shifts bits to the right               |

---

## 🔹 Examples

Let’s take:

```cpp
int a = 5;   // 0101
int b = 3;   // 0011
```

---

### 1️⃣ Bitwise AND (`&`)

```cpp
a & b  // 0001 → 1
```

👉 Only 1 where both bits are 1

---

### 2️⃣ Bitwise OR (`|`)

```cpp
a | b  // 0111 → 7
```

👉 1 if at least one bit is 1

---

### 3️⃣ Bitwise XOR (`^`)

```cpp
a ^ b  // 0110 → 6
```

👉 1 if bits are different

---

### 4️⃣ Bitwise NOT (`~`)

```cpp
~a  // -(a+1) → -6
```

👉 Inverts bits (uses two’s complement internally)

---

### 5️⃣ Left Shift (`<<`)

```cpp
a << 1  // 1010 → 10
```

👉 Multiply by (2^n)

---

### 6️⃣ Right Shift (`>>`)

```cpp
a >> 1  // 0010 → 2
```

👉 Divide by (2^n)

---

## 🔹 Important Concepts

### ✅ 1. Even or Odd Check

```cpp
if (n & 1) → odd
else → even
```

---

### ✅ 2. Set a Bit

```cpp
n = n | (1 << i);
```

---

### ✅ 3. Clear a Bit

```cpp
n = n & ~(1 << i);
```

---

### ✅ 4. Toggle a Bit

```cpp
n = n ^ (1 << i);
```

---

### ✅ 5. Check ith Bit

```cpp
if (n & (1 << i))
```

---

## 🔹 Why Bitwise is Powerful

* Faster than arithmetic operations
* Used in:

  * Competitive programming
  * Cryptography
  * Graphics
  * System-level programming

---

## 🔹 Small Tip (Very Important for Exams)

👉

* `x ^ x = 0`
* `x ^ 0 = x`

Used in problems like **finding unique number in array**

---

