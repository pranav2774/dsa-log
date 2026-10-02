# DSA Practice — Recursion Basics

## Today's Practice

Today I practiced the basics of **Recursion in C++**.

I focused on understanding:
- Base cases
- Recursive function calls
- How the position of the recursive call affects the output
- Printing values in increasing and decreasing order
- Recursion with backtracking

## Problems Solved

### 1. Print Name N Times

Created a recursive function to print a given name `N` times.

- Used `N` as the stopping condition.
- Printed the name.
- Decreased `N` before making the recursive call.

**Concept:** Basic Recursion

---

### 2. Print Numbers from 1 to N

Printed numbers from `1` to `N` using recursion.

- Started from `1`.
- Continued recursively until the starting value became greater than `N`.

**Concept:** Increasing Order Recursion

---

### 3. Print Numbers from N to 1

Printed numbers from `N` to `1` using recursion.

- Started with `N`.
- Printed the current value.
- Recursively decreased `N`.

**Concept:** Decreasing Order Recursion

---

### 4. Print Numbers from 1 to N Using Backtracking

Practiced printing numbers from `1` to `N` by making the recursive call before printing the current value.

The recursive function first goes deeper and then prints the value while returning from the recursive calls.

**Concept:** Recursion + Backtracking

---

### 5. Print Numbers from N to 1 Using Backtracking

Practiced the reverse backtracking pattern.

The recursive call is made first, and the current value is printed while returning from the recursive calls.

**Concept:** Recursion + Backtracking

---

## Concepts Practiced

- Recursion
- Base case
- Recursive case
- Function calls
- Increasing order recursion
- Decreasing order recursion
- Backtracking
- Call stack
- Multiple test cases

## Files Practiced

- `printName.cpp`
- `print1TON.cpp`
- `printNTO1.cpp`
- `print1TONBacktrack.cpp`
- `printNTO1BackTrack.cpp`

## Key Learning

Today I learned that the **position of the `cout` statement relative to the recursive call** can change the output order.

If the value is printed before the recursive call, the output happens while going deeper into recursion.

If the value is printed after the recursive call, the output happens while returning from recursion, which gives a backtracking effect.

## Status

✅ Basic recursion practiced  
✅ Base cases practiced  
✅ Recursive calls practiced  
✅ 1 to N pattern practiced  
✅ N to 1 pattern practiced  
✅ Backtracking recursion practiced