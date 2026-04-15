**DSA + C++ core concepts** 

---

# 🔹 1. What are Bitwise Operators?

Bitwise operators work on **binary (bits)** of numbers.

👉 Example:

```
5  = 0101
3  = 0011
```

Operations happen **bit by bit**.

---

# 🔹 2. Types of Bitwise Operators

---

## 🟢 1. AND (`&`)

👉 Rule: `1 & 1 = 1`, else `0`

```cpp
int a = 5; // 0101
int b = 3; // 0011
cout << (a & b); // 0001 = 1
```

---

## 🟢 2. OR (`|`)

👉 Rule: if any bit is `1` → result is `1`

```cpp
cout << (5 | 3); // 0111 = 7
```

---

## 🟢 3. XOR (`^`)

👉 Rule: different bits → `1`

```cpp
cout << (5 ^ 3); // 0110 = 6
```

---

## 🟢 4. NOT (`~`)

👉 Flips all bits

```cpp
cout << (~5);
```

👉 Important:

* Uses **2’s complement**
* Result becomes negative

Example:

```
5  = 00000101
~5 = 11111010 → -6
```

---

## 🟢 5. Left Shift (`<<`)

👉 Shifts bits left → multiply by 2

```cpp
cout << (5 << 1); // 10
cout << (5 << 2); // 20
```

---

## 🟢 6. Right Shift (`>>`)

👉 Shifts bits right → divide by 2

```cpp
cout << (5 >> 1); // 2
cout << (5 >> 2); // 1
```

---

# 🔹 3. Important Tricks (VERY IMPORTANT FOR DSA)

---

## ✅ 1. Check Even or Odd

```cpp
if(n & 1) cout << "Odd";
else cout << "Even";
```

👉 Faster than `% 2`

---

## ✅ 2. Check Power of 2

```cpp
if(n > 0 && (n & (n - 1)) == 0)
    cout << "Power of 2";
```

---

## ✅ 3. Swap Two Numbers (without temp)

```cpp
a = a ^ b;
b = b ^ a;
a = a ^ b;
```

---

## ✅ 4. Count Set Bits (1s)

```cpp
int count = 0;
while(n){
    count += (n & 1);
    n >>= 1;
}
```

---

## ✅ 5. Remove Last Set Bit

```cpp
n = n & (n - 1);
```

---

# 🔹 4. Real DSA Use Cases

Bitwise operators are heavily used in:

* 🔸 **Bit Manipulation problems**
* 🔸 Subsets generation
* 🔸 XOR problems (unique element)
* 🔸 Competitive programming
* 🔸 Optimization (fast operations)

---

# 🔥 Example Problem (Important)

### 👉 Find unique number (others appear twice)

```cpp
int ans = 0;
for(int i = 0; i < n; i++){
    ans ^= arr[i];
}
cout << ans;
```

👉 XOR cancels duplicates:

```
a ^ a = 0
0 ^ b = b
```

---

# 🔹 5. Quick Summary Table

| Operator | Meaning     |    |
| -------- | ----------- | -- |
| `&`      | AND         |    |
| `        | `           | OR |
| `^`      | XOR         |    |
| `~`      | NOT         |    |
| `<<`     | Left Shift  |    |
| `>>`     | Right Shift |    |

---

# 🔥 Pro Tip (Interview)

👉 Most important patterns:

* `n & 1` → odd/even
* `n & (n-1)` → power of 2 / remove bit
* XOR → unique element

---

