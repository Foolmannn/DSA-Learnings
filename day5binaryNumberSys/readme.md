**Two’s Complement** is a method used in computers to represent **negative binary numbers**.

---

### 🔹 Why do we use it?

* To represent both **positive and negative numbers** in binary
* Makes **addition and subtraction easier** (no separate subtraction logic needed)

---

### 🔹 How to find Two’s Complement?

👉 Follow these **2 simple steps**:

1. **Find 1’s complement** → invert all bits (0 → 1, 1 → 0)
2. **Add 1** to the result

---

### 🔹 Example

Let’s find the two’s complement of **5 (in 4-bit binary)**

1. Binary of 5 = `0101`
2. 1’s complement = `1010`
3. Add 1 → `1010 + 1 = 1011`

✅ So, **two’s complement of 5 = 1011**
👉 This represents **-5** in binary

---

### 🔹 Quick Formula

If a number is **N bits**, then:

[
\text{Range} = -2^{n-1} \text{ to } 2^{n-1} - 1
]

Example for 4-bit:

* Range = **-8 to +7**

---

### 🔹 Important Points

* MSB (Most Significant Bit):

  * `0` → Positive number
  * `1` → Negative number
* Only **one zero** exists in two’s complement (unlike 1’s complement)
* Widely used in programming (C++, Java, etc.)

---

### 🔹 Shortcut Tip

👉 To quickly find negative of a number:

* Copy bits from right until first `1`
* Flip remaining left bits

Example:
`0101 → 1011`

---


