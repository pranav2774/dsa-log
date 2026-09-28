# 📅 September 28, 2026

## 📚 Topic

**Striver's A2Z DSA Sheet — Time and Space Complexity**

---

# ⏱️ Time Complexity

The rate at which time taken increases with respect to input size is called **Time Complexity**.

Time complexity is denoted by **Big-O notation O()**.

---

# 📌 Rules to Keep in Mind While Computing Time Complexity

### 1. Always compute time complexity in the worst-case scenario

When calculating the time complexity of an algorithm, we generally consider the **worst-case scenario**.

### 2. Avoid constants in time complexity

Constants are ignored while calculating Big-O time complexity.

### 3. Avoid lower values while computing time complexity

Lower-order terms are ignored, and we consider the highest-order term.

---

# 📝 Example 1

```cpp
for(int i = 1; i <= n; i++) {
    cout << "Pranav Vyavahare";
}
````

The loop runs `N` times.

If we consider approximately 3 operations for each iteration:

```text
Number of Steps = N × 3
```

Therefore:

```text
Time Complexity = O(3N)
                = O(N)
```

So the time complexity is:

**O(N)**

---

# 📊 Best Case, Average Case and Worst Case

Consider the following example:

```cpp
if(marks < 25)
    cout << "GRADE D" << endl;

else if(marks < 50)
    cout << "GRADE C" << endl;

else if(marks < 75)
    cout << "GRADE B" << endl;

else
    cout << "GRADE A" << endl;
```

## 🟢 Best Case

If:

```text
marks = 20
```

The first condition is satisfied.

Number of steps = **2**

Therefore, this represents the **best-case scenario**.

---

## 🔴 Worst Case

If:

```text
marks = 85
```

All the conditions need to be checked before reaching the final `else`.

Number of steps = **5**

Therefore, this represents the **worst-case scenario**.

---

## 🟡 Average Case

Average case can be represented as:

```text
Average Case = (Best Case + Worst Case) / 2
```

---

# 🔁 Q.1 — Nested Loops

```cpp
for(int i = 0; i < N; i++) {

    for(int j = 0; j < N; j++) {

        cout << "Print Hello World!";
    }
}
```

The outer loop runs `N` times.

For every iteration of the outer loop, the inner loop also runs `N` times.

Therefore:

```text
Number of iterations = N × N
```

So:

```text
Time Complexity = O(N × N)
                = O(N²)
```

### Answer

**Time Complexity = O(N²)**

---

# 🔁 Q.2 — Nested Loops

```cpp
#include<bits/stdc++.h>
using namespace std;

int main() {

    int N = 5;

    for(int i = 0; i < N; i++) {

        for(int j = 0; j <= i; j++) {

            cout << "Hello World!" << endl;
        }
    }

    return 0;
}
```

For every value of `i`, the inner loop runs a different number of times.

The number of iterations is:

```text
1 + 2 + 3 + ... + N
```

Using the formula:

```text
N(N + 1) / 2
```

Therefore:

```text
Time Complexity = O(N(N + 1) / 2)
```

After ignoring constants and lower-order terms:

```text
Time Complexity = O(N²)
```

### Answer

**Time Complexity = O(N²)**

---

# 💾 Space Complexity

Space complexity is:

```text
Space Complexity = Auxiliary Space + Input Space
```

---

## 🛠️ Auxiliary Space

**Auxiliary space** is the space that you take to solve the problem.

---

## 📥 Input Space

**Input space** is the space that you take to store the input.

---

## 📝 Example

```text
c = a + b
```

Here:

* `a` and `b` are the **input space**.
* `c` is the **auxiliary space**.

Therefore:

```text
Space Complexity = Auxiliary Space + Input Space
```

---

# 🧠 What I Learned

* The meaning of time complexity.
* Big-O notation `O()`.
* How to calculate time complexity.
* How nested loops affect time complexity.
* How to calculate the time complexity of two nested loops.
* How to calculate the time complexity when the inner loop depends on the outer loop.
* The meaning of space complexity.
* The difference between auxiliary space and input space.

# 💡 Main Learning

> The rate at which time taken increases with respect to input size is called time complexity.
> Space complexity is combination of auxiliary space and input space
---

# 📌 Today's Progress

**Lecture Completed:** 1

**Topic:** Time and Space Complexity

**Coding Problems:** None

**Status:** Lecture completed and notes documented.

```
```
