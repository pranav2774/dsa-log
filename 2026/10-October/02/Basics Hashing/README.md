# DSA Practice — Basic Hashing

## Today's Practice

Today I practiced the basics of **Hashing in C++**.

I focused on understanding how hashing can be used to efficiently store and retrieve the frequency of elements.

## Problems Solved

### 1. Character Hashing

Practiced counting the frequency of characters in an array.

- Used an integer hash array of size `256`.
- Stored the frequency of each character.
- Used the character as an index while fetching its frequency.

**Concepts:**
- Character hashing
- Pre-storing
- Fetching
- Frequency counting

---

### 2. Number Hashing

Practiced counting the frequency of numbers using an array-based hash.

- Created a hash array based on the maximum possible element.
- Traversed the input array and stored the frequency of each number.
- Used the number as an index to fetch its frequency.

**Concepts:**
- Number hashing
- Frequency array
- Pre-storing
- Fetching

---

### 3. Number Hashing Using `map`

Practiced frequency counting using the C++ `map` data structure.

- Created a `map<int, int>`.
- Used the array elements as keys.
- Stored their frequencies as values.
- Used the map to answer frequency queries.

**Concepts:**
- `map`
- Key-value pairs
- Frequency counting
- Pre-storing and fetching

---

### 4. Highest Occurring Element

Practiced finding the element with the highest frequency.

- Created a frequency map using `map`.
- Traversed the map to find the highest frequency.
- Stored the corresponding element.
- If two elements had the same frequency, selected the smaller element using a `minElement()` function.

**Concepts:**
- Frequency map
- Finding maximum frequency
- Handling equal frequencies
- `map` traversal

---

### 5. Second Highest Occurring Element

Practiced finding the element having the second-highest frequency.

- Created a frequency map.
- Traversed the map.
- Maintained:
  - Highest occurring element
  - Highest frequency
  - Second highest occurring element
  - Second highest frequency

**Concepts:**
- Frequency map
- Finding highest and second-highest frequency
- Tracking multiple values while traversing a map

---

### 6. Sum of Highest and Lowest Frequency

Practiced finding the highest and lowest frequencies of elements.

- Created a frequency map.
- Traversed the map.
- Found the highest frequency.
- Found the lowest frequency.
- Calculated the sum of both frequencies.

**Concepts:**
- Frequency map
- Maximum frequency
- Minimum frequency
- Map traversal

---

## Concepts Practiced

- Hashing
- Character hashing
- Number hashing
- Frequency counting
- Pre-storing
- Fetching
- C++ `map`
- Key-value pairs
- Map traversal
- Finding maximum frequency
- Finding minimum frequency
- Finding second-highest frequency
- Handling equal frequencies

## Files Practiced

- `characterHashing.cpp`
- `hashing.cpp`
- `hashingMap.cpp`
- `highestOccuringElement.cpp`
- `secondHighestOccring.cpp`
- `sumHighestLowestFrequency.cpp`

## Key Learning

Today I learned how hashing can be used to store the frequency of elements and retrieve their frequencies efficiently.

I practiced both **array-based hashing** and **map-based hashing**.

I also practiced using frequency information to solve problems such as finding the highest occurring element, second-highest occurring element, and the sum of the highest and lowest frequencies.

## Status

✅ Character hashing practiced  
✅ Number hashing practiced  
✅ Frequency counting practiced  
✅ Array-based hashing practiced  
✅ `map`-based hashing practiced  
✅ Highest occurring element practiced  
✅ Second highest occurring element practiced  
✅ Highest and lowest frequency practiced