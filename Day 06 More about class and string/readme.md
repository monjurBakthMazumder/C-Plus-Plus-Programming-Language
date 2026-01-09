# 📘 More About Class & String in C++

**(Intermediate Concepts with Practical Examples)**

This repository covers **advanced but essential concepts** of **C++ Classes and Strings** that every serious learner must understand to write **safe, professional, and real-world C++ code**.

These topics explain:

- How objects behave in **Heap vs Stack**
- How **copying objects** really works
- Why **member functions** matter
- Modern **string traversal & algorithms**
- Powerful **STL functions** on strings

---

## 🧠 Topics Covered

- Dynamic object copying (Deep vs Shallow)
- Functions inside a class
- Range-based for loop
- String reverse & sort
- String constructors
- Real-world memory safety rules

---

## 🧩 Learning Order (Professional Flow)

1️⃣ Object Copying in Heap
2️⃣ Functions Inside Class
3️⃣ Range-Based Loop
4️⃣ Reverse String
5️⃣ Sort String
6️⃣ String Constructors

---

## 🧱 1. Dynamic Object Copy (VERY IMPORTANT)

📄 **File:** `dynamic_object_copy.cpp`

### 🔍 What You Learn

- Why `pointer = pointer` is dangerous
- Difference between **copying address vs copying data**
- How to safely copy dynamic objects

### ⚠️ Key Rule

> ❌ Copying pointers copies **addresses**
> ✅ Dereferencing copies **actual object data**

### ✅ Code

```cpp
#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    string country;
    int jersey;

    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};

int main()
{
    Cricketer *dhoni = new Cricketer("India", 100);
    Cricketer *kohli = new Cricketer("India", 18);

    *kohli = *dhoni; // SAFE DATA COPY

    delete dhoni;

    cout << kohli->country << " " << kohli->jersey << endl;
    return 0;
}
```

---

## 🧱 2. Functions Inside Class (OOP Power)

📄 **File:** `function_inside_class.cpp`

### 🔍 What You Learn

- Member functions access object data directly
- Objects behave like **smart robots**
- Better design & cleaner code

### ✅ Code

```cpp
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll, math, english;

    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    void hello()
    {
        cout << "Hello from " << name << endl;
    }

    void total()
    {
        cout << "Total marks of " << name << " = " << math + english << endl;
    }
};

int main()
{
    Student monjur("Md Monjur Bakth Mazumder", 24, 56, 80);
    monjur.hello();
    monjur.total();

    Student masum("Md Masum Bakth Mazumder", 28, 80, 98);
    masum.hello();
    masum.total();

    return 0;
}
```

---

## 🧱 3. Range-Based For Loop (Modern C++)

📄 **File:** `range_based_for_loop.cpp`

### 🔍 What You Learn

- Cleaner alternative to index-based loops
- Safer and more readable

### ✅ Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (char c : s)
    {
        cout << c << " ";
    }

    return 0;
}
```

---

## 🧱 4. Reverse a String (STL Algorithm)

📄 **File:** `reverse_function.cpp`

### 🔍 What You Learn

- Using STL algorithms
- How iterators work with strings

### ✅ Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "monjur";
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}
```

---

## 🧱 5. Sorting a String

📄 **File:** `sort_string.cpp`

### 🔍 What You Learn

- ASCII-based sorting
- Alphabetical ordering

### ✅ Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "monjurv";
    sort(s.begin(), s.end());
    cout << s << endl;
    return 0;
}
```

---

## 🧱 6. String Constructors (Advanced Creation)

📄 **File:** `string_constructor.cpp`

### 🔍 What You Learn

Different ways to create strings efficiently.

### ✅ Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1("Hello");
    string s2("Hello", 2);
    string s3 = "Hello";
    string t(s3, 2);
    string s4(5, 'a');

    cout << s1 << endl;
    cout << s2 << endl;
    cout << t << endl;
    cout << s4 << endl;

    return 0;
}
```

---

## 🧠 Key Takeaways

✔ Always copy **object data**, not pointers
✔ Member functions = cleaner OOP
✔ Range-based loops are modern & safe
✔ STL algorithms save time & reduce bugs
✔ String class manages memory automatically

---

## 🎯 Who Should Use This?

- C++ beginners moving to **intermediate**
- Competitive programmers
- University students
- Anyone learning **real C++ design**

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
