# DSA Practice — Arrays

## Today's Practice

Today I practiced some basic **Array problems in C++** to strengthen my understanding of array traversal, loops, conditions, and basic problem-solving.

## Problems Solved

### 1. Read and Print an Array

- Took the size of the array as input.
- Took array elements from the user.
- Printed all elements of the array.
- Practiced creating separate functions for reading and printing the array.

### 2. Find the Sum of Array Elements

- Traversed the array using a `for` loop.
- Added each element to a `sum` variable.
- Printed the total sum.

**Time Complexity:** `O(N)`

### 3. Count Even and Odd Elements

- Traversed the array.
- Used the modulo operator `%` to check whether each element is even or odd.
- Counted the total number of even and odd elements.

**Time Complexity:** `O(N)`

### 4. Reverse an Array

Practiced two approaches:

#### Brute Force Approach

- Created a separate array.
- Stored the elements in reverse order.
- Printed the reversed array.

**Time Complexity:** `O(N)`
**Space Complexity:** `O(N)`

#### Optimal Approach

- Used two pointers:
  - `i` starting from the beginning.
  - `j` starting from the end.
- Swapped the elements while `i < j`.
- Used a separate `swapNum()` function with pointers.

**Time Complexity:** `O(N/2)`
**Space Complexity:** `O(1)`

### 5. Check Whether an Array is Sorted

Practiced two approaches:

#### Brute Force Approach

- Compared elements using nested loops.
- Checked whether the array elements are in ascending order.

**Time Complexity:** `O(N²)`

#### Optimal Approach

- Compared each element with its previous element.
- If `arr[i-1] >= arr[i]`, the array is considered not sorted.
- Stopped immediately when an incorrect order was found.

**Time Complexity:** `O(N)`
**Space Complexity:** `O(1)`

## Concepts Practiced

- Arrays
- Array traversal
- `for` loops
- `while` loops
- Conditional statements
- Functions
- Pointers
- Swapping elements
- Two-pointer technique
- Time complexity
- Space complexity
- Brute-force vs optimal approach

## Files Practiced

- `sumArray.cpp`
- `countEvenOddArray.cpp`
- `reverseArray.cpp`
- `checkArraySorted.cpp`
- `checkArraySortedOptimal.cpp`

## Key Learning

Today I focused on building a strong foundation in **array problem solving** and understanding how the same problem can sometimes be solved using different approaches.

I also practiced identifying the difference between a **brute-force approach** and a more **space/time-efficient approach**.

## Status

✅ Array basics practiced  
✅ Multiple array problems solved  
✅ Brute-force approaches practiced  
✅ Optimal approaches practiced  
✅ Time and space complexity reviewed