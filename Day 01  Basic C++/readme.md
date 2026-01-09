
# 💻 Basic C++ Programming – Beginner Friendly Guide

Welcome to **Basic C++ Programming** 🎉  
This repository is made for **absolute beginners** who want to learn **C++ from zero**, with **simple explanations and real examples**.

Each program explains **one concept only**, so you never feel confused or overloaded.

If this is your first programming language — you are in the right place 😊

---

## 🧩 Topics Covered

- Printing Output
- Taking Input
- If–Else Conditions
- Switch Statements
- Ternary Operator
- End Of File (EOF)
- Strings & Input Buffer
- Min, Max & Swap
- Decimal Precision
- Type Casting

---

## 🖨️ print.cpp — Printing Output

This program teaches **how to print text and variables on the screen**.

```cpp
#include <iostream> // Library for input & output

int main()
{
    // Print simple text
    std::cout << "Hello World" << std::endl;

    // Create variables
    int x = 100;        // Integer
    char a = 'A';       // Character
    double d = 37.564;  // Decimal number

    // Print multiple values together
    std::cout << x << " " << a << " " << d << std::endl;

    return 0;
}
````

🧠 **Key Idea:**

* `cout` prints to screen
* `<<` means “send to output”
* `endl` means new line

---

## ⌨️ input.cpp — Taking Input & Type Casting

This program shows **how to take multiple inputs** and **convert data types**.

```cpp
#include <iostream>
using namespace std;

int main()
{
    int x;
    char c;
    double d;

    // Take input: number, character, decimal
    cin >> x >> c >> d;

    // Print inputs
    cout << x << endl;
    cout << c << endl;
    cout << d << endl;

    // Type casting
    cout << (int)c << endl;   // Convert char to number
    cout << (char)x << endl;  // Convert number to char

    return 0;
}
```

🧠 **Key Idea:**

* `cin` takes input
* Type casting forces one data type to behave like another

---

## ⚖️ if_else.cpp — Even or Odd Using If-Else

This program checks whether a number is **Even or Odd**.

```cpp
#include <iostream>
using namespace std;

int main()
{
    int x = 7;

    // Check remainder after dividing by 2
    if (x % 2 == 0)
    {
        cout << "Even\n";
    }
    else
    {
        cout << "Odd\n";
    }

    return 0;
}
```

🧠 **Key Idea:**

* `%` gives remainder
* Even → remainder `0`
* Odd → remainder `1`

---

## 🔁 ternary_operator.cpp — One-Line If-Else

This program does the **same even/odd check** using **one line**.

```cpp
#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    // Ternary Operator
    (x % 2 == 0) ? cout << "Even\n" : cout << "Odd\n";

    return 0;
}
```

🧠 **Syntax:**

```
(condition) ? true_part : false_part;
```

---

## 🎛️ switch.cpp — Day Name Finder

This program prints the **day name** using `switch`.

```cpp
#include <iostream>
using namespace std;

int main()
{
    int day;
    cin >> day;

    switch (day)
    {
    case 1: cout << "Saturday\n"; break;
    case 2: cout << "Sunday\n"; break;
    case 3: cout << "Monday\n"; break;
    case 4: cout << "Tuesday\n"; break;
    case 5: cout << "Wednesday\n"; break;
    case 6: cout << "Thursday\n"; break;
    case 7: cout << "Friday\n"; break;
    default: cout << "Invalid day\n";
    }

    return 0;
}
```

🧠 **Key Idea:**

* `break` stops execution
* `default` works like `else`

---

## 🎯 switch2.cpp — Even or Odd Using Switch

Here we use **logic inside switch**.

```cpp
#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    switch (x % 2)
    {
    case 0:
        cout << "Even\n";
        break;
    case 1:
        cout << "Odd\n";
        break;
    }

    return 0;
}
```

🧠 **Key Idea:**

* `x % 2` can only be `0` or `1`

---

## 🔤 switch3.cpp — Vowel or Consonant

This program checks if a letter is a **vowel**.

```cpp
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    switch (ch)
    {
    case 'a': case 'e': case 'i': case 'o': case 'u':
    case 'A': case 'E': case 'I': case 'O': case 'U':
        cout << "Vowel\n";
        break;
    default:
        cout << "Consonant\n";
    }

    return 0;
}
```

🧠 **Key Idea:**

* Multiple cases can share one output
* This is called **fall-through**

---

## 🔁 EOF.cpp — End Of File (EOF)

This program reads input **until input ends**.

```cpp
#include <iostream>
using namespace std;

int main()
{
    int x;

    // Loop runs while input exists
    while (cin >> x)
    {
        cout << x << endl;
    }

    return 0;
}
```

🧠 **Key Idea:**

* Very useful in **competitive programming**
* Loop stops when input ends

---

## 🔠 string.cpp — Reading Text with Spaces

This program fixes the **cin + newline problem**.

```cpp
#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    cin.ignore(); // Clear leftover Enter key

    char s[100];
    cin.getline(s, 100); // Read full line

    cout << x << endl;
    cout << s << endl;

    return 0;
}
```

🧠 **Key Idea:**

* `cin` leaves newline in buffer
* `cin.ignore()` clears it
* `getline` reads full sentence

---

## 🔢 min_max_swap.cpp — Min, Max & Swap

This program uses **built-in C++ tools**.

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int mn = min(a, b);
    int mx = max(a, b);

    swap(mn, mx);

    cout << "Min = " << mn << endl;
    cout << "Max = " << mx << endl;

    cout << min({4, 6, 9, 6, 2, 0}) << endl;
    cout << max({4, 6, 9, 6, 2, 0}) << endl;

    return 0;
}
```

🧠 **Key Idea:**

* `min`, `max`, `swap` save time
* `{}` allows comparing many values

---

## 🎯 setprecision.cpp — Decimal Formatting

This program controls **decimal places**.

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x = 23.534534;

    cout << fixed << setprecision(2) << x << endl;

    return 0;
}
```

🧠 **Key Idea:**

* `fixed` disables scientific notation
* `setprecision(2)` shows 2 digits after decimal

---

## ⚙️ How to Run

```bash
g++ filename.cpp -o output
./output
```

---

# Author

**Md Monjur Bakth Mazumder**  
**Software Engineer | Lead Frontend Developer**

Software Engineer & Lead Frontend Developer at [Qrinux](https://www.qrinux.com/)  
Software Engineer & Lead Frontend Developer at [Boom Box E-Solutions](https://www.boomboxesolutions.com/)

📧 [Email me](mailto:md.monjurmbm2001@gmail.com)  
🌐 [Portfolio](https://mdmonjurbakthmazumder.netlify.app)

Passionate about building clean, maintainable, and scalable applications

### ⭐ If you find this helpful, don’t forget to **star** the repository!
