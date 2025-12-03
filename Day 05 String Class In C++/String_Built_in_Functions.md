# String Built-in Functions in C++

This is a reference guide for commonly used string built-in functions in C++.

---

## Capacity Functions

| Function | Description |
|----------|-------------|
| `s.size()` | Returns the size (number of characters) of the string. |
| `s.max_size()` | Returns the maximum size that the string can hold. |
| `s.capacity()` | Returns the current allocated capacity of the string. |
| `s.clear()` | Clears the contents of the string. |
| `s.empty()` | Returns `true` if the string is empty, otherwise `false`. |
| `s.resize()` | Changes the size of the string. |

---

## Element Access Functions

| Function | Description |
|----------|-------------|
| `s[i]` | Access the character at the `i`-th index. |
| `s.at(i)` | Access the character at the `i`-th index with bounds checking. |
| `s.back()` | Access the last character of the string. |
| `s.front()` | Access the first character of the string. |

---

## Modifiers

| Function | Description |
|----------|-------------|
| `s +=` | Append another string. |
| `s.append()` | Append another string. |
| `s.push_back()` | Add a character to the end of the string. |
| `s.pop_back()` | Remove the last character of the string. |
| `s =` | Assign a new string. |
| `s.assign()` | Assign a new string. |
| `s.erase()` | Erase characters from the string. |
| `s.replace()` | Replace a portion of the string with another string. |
| `s.insert()` | Insert a string at a specific position. |

---

## Iterators

| Function | Description |
|----------|-------------|
| `s.begin()` | Returns an iterator to the first element of the string. |
| `s.end()` | Returns an iterator to the position after the last element of the string. |

---
