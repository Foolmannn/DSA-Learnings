**Binary Exponentiation (Fast Power)**—is  the optimal way to solve this problem. .

---

# 🔥 Core Idea

Instead of multiplying `x` by itself `n` times:

```cpp
x * x * x * x * ... (n times)  → O(n)
```

we use:

👉 **Divide the power using binary (powers of 2)**

Example:

```
2^10 = 2^8 * 2^2
```

---

# 🧠 Mathematical Insight

x^n = \begin{cases} (x^2)^{n/2}, & n \text{ even} \ x \cdot (x^2)^{(n-1)/2}, & n \text{ odd} \end{cases}

👉 This is the foundation of your code.

---

# 🔹 Step-by-Step Code Breakdown

```cpp
double myPow(double x, int n)
```

---

## ✅ 1. Base Cases

```cpp
if(n==0) return 1.0;
if(x==0) return 0.0;
if(x==1) return 1.0;
if(x==-1 && n%2 == 0 ) return 1.0; 
if(x==-1 && n%2 != 0 ) return -1.0;
```

👉 These are **quick optimizations**:

* `x^0 = 1`
* `0^n = 0`
* `1^n = 1`
* `(-1)^n` alternates → avoids unnecessary computation

---

## 🔹 2. Convert `n` to long

```cpp
long binform = n;
```

👉 Why?

* If `n = -2^31`, then `-n` overflows in `int`
* Using `long` avoids overflow

---

## 🔹 3. Handle Negative Powers

```cpp
if(n < 0){
    x = 1 / x;
    binform = -binform;
}
```

👉 Because:

```
x^(-n) = 1 / x^n
```

Example:

```
2^-3 = 1 / (2^3) = 1/8
```

---

## 🔁 4. Main Loop (Binary Exponentiation)

```cpp
while(binform > 0){
    if(binform % 2 == 1){
        ans *= x;
    }
    x *= x;
    binform /= 2;
}
```

---

# 🧩 How This Actually Works

Let’s take:

```
x = 2, n = 10
```

Binary of 10:

```
1010
```

---

### Iteration Breakdown

| Step | binform | Action         | ans  | x     |
| ---- | ------- | -------------- | ---- | ----- |
| 1    | 10      | even → skip    | 1    | 4     |
| 2    | 5       | odd → ans *= x | 4    | 16    |
| 3    | 2       | even → skip    | 4    | 256   |
| 4    | 1       | odd → ans *= x | 1024 | 65536 |

👉 Final answer = **1024**

---

# 🔥 Key Intuition

* When `n` is **odd** → take current `x`
* Square `x` every step
* Divide `n` by 2

👉 You are essentially using:

```
n = sum of powers of 2
```

---

# ⚡ Time Complexity

* Each step divides `n` by 2
  👉 **O(log n)**

---

# ⚠️ Important Subtle Points

### ✅ Why `ans *= x` when odd?

Because that bit contributes to the final result.

---

### ✅ Why `x *= x`?

You move from:

```
x → x^2 → x^4 → x^8 ...
```

---

### ✅ Why `binform /= 2`?

You shift bits right:

```
1010 → 0101 → 0010 → 0001
```

---

# 🔥 Cleaner Version (Same Logic)

```cpp
double myPow(double x, int n) {
    long long N = n;
    
    if (N < 0) {
        x = 1 / x;
        N = -N;
    }

    double ans = 1;

    while (N) {
        if (N & 1) ans *= x;  // check odd
        x *= x;
        N >>= 1;              // divide by 2
    }

    return ans;
}
```

---

# 🧠 Interview Takeaways

* This is **binary exponentiation**
* Used in:

  * Modular exponentiation
  * Matrix exponentiation
  * Fast calculations in DSA

---


