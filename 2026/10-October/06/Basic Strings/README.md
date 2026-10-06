# DSA Practice — Basic Strings

## Today's Practice

Today I practiced the **Basic Strings** section from **Striver's A2Z DSA Sheet (New Sheet)**.

I solved 8 LeetCode problems and practiced different string manipulation techniques such as two pointers, character hashing, frequency counting, mapping, recursion, and string rotation.

## Problems Solved

### 1. LeetCode 14 — Longest Common Prefix

- Used the first string as a reference string.
- Compared each character of the reference string with the corresponding character of all other strings.
- Stopped when a mismatch was found.
- Used `substr()` to return the common prefix.

**Concepts Practiced:**
- String traversal
- Nested loops
- Character comparison
- `substr()`

---

### 2. LeetCode 125 — Valid Palindrome

- Used two pointers:
  - One pointer starting from the beginning.
  - One pointer starting from the end.
- Ignored non-alphanumeric characters.
- Converted uppercase characters to lowercase.
- Compared characters from both sides.
- Stopped when a mismatch was found.

**Concepts Practiced:**
- Two-pointer technique
- Character checking
- Case conversion
- Palindrome checking

---

### 3. LeetCode 205 — Isomorphic Strings

- Used two arrays of size `256` for character mapping.
- Maintained mappings in both directions:
  - Character from `s` → character from `t`
  - Character from `t` → character from `s`
- Checked whether an existing mapping was consistent.
- Created a new mapping when no previous mapping existed.

**Concepts Practiced:**
- Character hashing
- Character mapping
- Bidirectional mapping
- Frequency/hash arrays

---

### 4. LeetCode 242 — Valid Anagram

- First checked whether both strings have the same length.
- Used a frequency array of size `26`.
- Increased the frequency for characters from the first string.
- Decreased the frequency for characters from the second string.
- Checked whether every frequency became `0`.

**Concepts Practiced:**
- Character hashing
- Frequency array
- String traversal
- Anagram checking

---

### 5. LeetCode 344 — Reverse String

- Practiced reversing a string using recursion.
- Used two positions to swap characters from opposite sides.
- Swapped the current character with the corresponding character from the end.
- Recursively moved toward the center.
- Used a base condition when the starting position reached the middle.

**Concepts Practiced:**
- Recursion
- String reversal
- Swapping
- Two-pointer idea
- Base condition

---

### 6. LeetCode 451 — Sort Characters By Frequency

- Used `unordered_map` to store the frequency of every character.
- Converted the frequency map into a vector of pairs.
- Used bubble sort to arrange characters according to decreasing frequency.
- Constructed the resulting string using the sorted frequencies.

**Concepts Practiced:**
- `unordered_map`
- Frequency counting
- `vector<pair<>>`
- Bubble sort
- String construction

---

### 7. LeetCode 796 — Rotate String

- Checked whether both strings have the same length.
- Repeatedly rotated the string by moving the first character to the end.
- After every rotation, compared the resulting string with `goal`.
- Returned true when a matching rotation was found.

**Concepts Practiced:**
- String rotation
- String traversal
- Character shifting
- String comparison
- Simulation

---

### 8. LeetCode 1903 — Largest Odd Number in String

- Traversed the string from right to left.
- Converted each character into an integer.
- Found the rightmost odd digit.
- Used `substr()` to return the prefix ending at that digit.
- If no odd digit was found, the resulting string remains empty.

**Concepts Practiced:**
- String traversal
- Character-to-integer conversion
- Finding the rightmost odd digit
- `substr()`

---

## Concepts Practiced

- Strings
- String traversal
- Character comparison
- Two-pointer technique
- Recursion
- Character hashing
- Frequency arrays
- `map` / `unordered_map`
- Character mapping
- String rotation
- String reversal
- Bubble sort
- `substr()`
- Character-to-integer conversion
- Brute-force / simulation approaches

## LeetCode Problems

| LeetCode | Problem |
|---|---|
| 14 | Longest Common Prefix |
| 125 | Valid Palindrome |
| 205 | Isomorphic Strings |
| 242 | Valid Anagram |
| 344 | Reverse String |
| 451 | Sort Characters By Frequency |
| 796 | Rotate String |
| 1903 | Largest Odd Number in String |

## Files Practiced

- `14_longestCommonPrefix.cpp`
- `125_validPalindrome.cpp`
- `205_isomorphicString.cpp`
- `242_validAnagram.cpp`
- `344_reverseString.cpp`
- `451_sortCharfrequency.cpp`
- `796_rotateString.cpp`
- `1903_largestOddNumber.cpp`

## Key Learning

Today I practiced the **Basic Strings** problems from Striver's A2Z DSA Sheet.

I learned how different string problems can be solved using techniques such as:

- Two pointers
- Character hashing
- Frequency counting
- Bidirectional character mapping
- Recursion
- String simulation
- Sorting based on frequency

I also practiced solving problems from LeetCode and converting the concepts learned into working C++ solutions.

## Status

✅ Striver's A2Z Basic Strings practiced  
✅ 8 LeetCode problems solved  
✅ Two-pointer technique practiced  
✅ Character hashing practiced  
✅ Frequency counting practiced  
✅ String recursion practiced  
✅ String manipulation practiced  
✅ LeetCode problems practiced