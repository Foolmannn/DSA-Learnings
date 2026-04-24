String operations in C++ mainly revolve around the `std::string` class from the C++ Standard Library. It’s far more powerful and safer than old C-style character arrays.

Let’s go step by step in a way that actually builds intuition 👇

---

# 🔹 1. Creating Strings

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2("World");
    string s3(5, 'A'); // AAAAA

    cout << s1 << " " << s2 << " " << s3;
}
```

---

# 🔹 2. Taking Input

```cpp
string name;
cin >> name;       // stops at space

getline(cin, name); // takes full line
```

👉 Important:
If you use `cin` before `getline`, you may need:

```cpp
cin.ignore();
```

---

# 🔹 3. String Length

```cpp
string s = "Hello";

cout << s.length(); // 5
cout << s.size();   // same as length()
```

---

# 🔹 4. Accessing Characters

```cpp
string s = "Hello";

cout << s[0];       // H
cout << s.at(1);    // e (safer)
```

👉 Difference:

* `[]` → no bounds checking
* `.at()` → throws error if out of range

---

# 🔹 5. String Concatenation

```cpp
string a = "Hello";
string b = "World";

string c = a + " " + b;
a += b;
```

---

# 🔹 6. Comparing Strings

```cpp
string a = "abc";
string b = "abd";

if (a == b) cout << "Equal";

if (a < b) cout << "a is smaller";
```

👉 Comparison is **lexicographical** (dictionary order)

---

# 🔹 7. Substring

```cpp
string s = "HelloWorld";

string sub = s.substr(0, 5); // "Hello"
```

👉 Format:

```
substr(start, length)
```

---

# 🔹 8. Find Operation

```cpp
string s = "Hello World";

int pos = s.find("World");

if (pos != string::npos)
    cout << "Found at " << pos;
```

---

# 🔹 9. Insert

```cpp
string s = "Hello";

s.insert(5, " World"); // Hello World
```

---

# 🔹 10. Erase

```cpp
string s = "Hello World";

s.erase(5, 1); // removes space → HelloWorld
```

---

# 🔹 11. Replace

```cpp
string s = "Hello World";

s.replace(6, 5, "C++"); // Hello C++
```

---

# 🔹 12. Reverse String

```cpp
#include <algorithm>

string s = "Hello";

reverse(s.begin(), s.end());

cout << s; // olleH
```

---

# 🔹 13. Sorting String

```cpp
string s = "dcba";

sort(s.begin(), s.end());

cout << s; // abcd
```

---

# 🔹 14. Convert Case

```cpp
#include <algorithm>

string s = "hello";

transform(s.begin(), s.end(), s.begin(), ::toupper);
```

---

# 🔹 15. String to Number & Vice Versa

```cpp
string s = "123";

int num = stoi(s);

string str = to_string(num);
```

---

# 🔹 16. Iterating Through String

```cpp
string s = "Hello";

// method 1
for (int i = 0; i < s.length(); i++)
    cout << s[i];

// method 2
for (char c : s)
    cout << c;
```

---

# 🔹 17. Check Empty

```cpp
if (s.empty()) {
    cout << "String is empty";
}
```

---

# 🔹 18. Clear String

```cpp
s.clear();
```

---

# ⚠️ Important for Interviews / DSA

* Strings are **mutable in C++**
* Internally they use **dynamic arrays**
* Most operations are:

  * Access → O(1)
  * Insert/Delete → O(n)

---

# 🔥 Pro Tip (DSA Level)

Sometimes use:

```cpp
vector<char>
```

instead of string when:

* frequent modifications required
* performance critical

---

