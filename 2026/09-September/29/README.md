# DSA Log — 29 September 2026

## Topic: C++ STL

Today I studied and practiced the **C++ Standard Template Library (STL)**.

### STL topics covered

1. **Pair**
   - Creating and accessing pairs
   - Nested pairs
   - Array of pairs

2. **Vector**
   - `push_back()` and `emplace_back()`
   - Creating vectors with initial values
   - Copying vectors
   - Iterators: `begin()`, `end()`
   - Accessing elements using `[]` and `at()`
   - Range-based loops
   - `erase()`
   - `insert()`
   - `size()`, `capacity()`, `swap()`, `clear()`, `empty()`

3. **List**
   - `push_back()`
   - `push_front()`
   - `emplace_front()`
   - Iteration using iterators

4. **Deque**
   - `push_back()`, `push_front()`
   - `emplace_back()`, `emplace_front()`
   - `pop_back()`, `pop_front()`

5. **Stack**
   - `push()`, `emplace()`
   - `top()`
   - `pop()`
   - `size()`, `empty()`, `swap()`
   - LIFO concept

6. **Queue**
   - `push()`, `emplace()`
   - `front()`, `back()`
   - `pop()`
   - `size()`, `empty()`
   - FIFO concept

7. **Priority Queue**
   - Max heap using `priority_queue`
   - Min heap using `greater<int>`
   - `push()`, `emplace()`, `top()`, `pop()`
   - Time complexity of `top()`, `push()`, and `pop()`

8. **Set**
   - Stores **unique elements in sorted order**
   - `insert()`
   - `find()`
   - `erase()`
   - `count()`
   - Basic time complexity: `O(log N)`

9. **Multiset**
   - Allows duplicate elements
   - `insert()`
   - `count()`
   - Difference between `erase(value)` and `erase(iterator)`
   - Range erase using iterators
   - Basic time complexity: `O(log N)` for common operations

10. **Unordered Set**
    - Elements are not stored in sorted order
    - Average time complexity: `O(1)`
    - Worst case: `O(N)`
    - `lower_bound()` and `upper_bound()` are not available like they are in `set`

11. **Map**
    - Key-value pairs
    - `map<int,int>`
    - Maps with pair values/keys
    - `insert()`
    - `[]`
    - `find()`
    - `map` stores keys in sorted order
    - Basic time complexity: `O(log N)`

12. **Multimap**
    - Similar to `map`
    - Allows duplicate keys
    - Basic time complexity: `O(log N)`

13. **Unordered Map**
    - Key-value container without sorted key order
    - Average time complexity: `O(1)`
    - Worst case: `O(N)`

### Practice

I implemented and practiced STL examples in C++, including:

- `pair`
- `vector`
- `list`
- `deque`
- `stack`
- `queue`
- `priority_queue`
- `set`
- `multiset`
- `unordered_set`
- `map`
- `multimap`
- `unordered_map`

The main practice file contains functions such as `explainPair()`, `explainVector()`, `explainList()`, `explainDequeue()`, `explainStack()`, `explainQueue()`, `explainPriorityQueue()`, `explainSet()`, and `explainMultiSet()`.

### Key learning

- STL containers make common data-structure operations easier and faster to implement.
- I learned the difference between **ordered**, **unordered**, and **duplicate-allowing** containers.
- I practiced using **iterators** and common STL container operations.
- I also learned the basic time complexities of major STL operations.

### Today's status

**Completed:** C++ STL fundamentals and hands-on practice.
