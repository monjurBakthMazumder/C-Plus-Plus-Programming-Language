# 📚 Array of Objects in C++

This repository demonstrates how to use **arrays of objects in C++** effectively.
It includes practical examples for **creating objects, input/output, searching, and sorting**, which are commonly used in **real-world programs**.

**Topics Covered:**

- Array of objects
- Finding maximum & minimum in an array of objects
- Sorting arrays of objects (simple & complex rules)

---

## 🧩 Learning Flow (Professional Serial)

1️⃣ Create & Use Array of Objects
2️⃣ Find Maximum in Array of Objects
3️⃣ Find Minimum in Array of Objects
4️⃣ Sort Array of Objects (Ascending by Marks)
5️⃣ Sort Array of Objects with Complex Rule (Marks + Tie-breaker)

---

## 🧱 1. Create & Use Array of Objects

📄 **File:** `array_of_object.cpp`

### 🔍 What You Learn

- How to define a class
- How to create an **array of objects**
- How to take input with `getline` (handling spaces)

### ✅ Code Example

```cpp
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mark;
};

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].mark;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].mark << endl;
    }

    return 0;
}
```

---

## 🧱 2. Find Maximum in Array of Objects

📄 **File:** `max_in_array_of_objects.cpp`

### 🔍 What You Learn

- How to find the object with the **highest marks**
- Using a temporary object to store the **best result**

### ✅ Code Example

```cpp
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mark;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i].name >> a[i].roll >> a[i].mark;

    Student result;
    result.mark = INT_MIN;

    for (int i = 0; i < n; i++)
        if (a[i].mark > result.mark)
            result = a[i];

    cout << result.name << " " << result.roll << " " << result.mark << endl;
    return 0;
}
```

---

## 🧱 3. Find Minimum in Array of Objects

📄 **File:** `min_in_array_of_objects.cpp`

### 🔍 What You Learn

- How to find the object with the **lowest marks**
- Safe initialization using `INT_MAX`

### ✅ Code Example

```cpp
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mark;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i].name >> a[i].roll >> a[i].mark;

    Student mini;
    mini.mark = INT_MAX;

    for (int i = 0; i < n; i++)
        if (a[i].mark < mini.mark)
            mini = a[i];

    cout << mini.name << " " << mini.roll << " " << mini.mark << endl;
    return 0;
}
```

---

## 🧱 4. Sort Array of Objects (Ascending by Marks)

📄 **File:** `sort_array_of_objects.cpp`

### 🔍 What You Learn

- Sorting objects with **custom comparator**
- Using **`std::sort()`** with arrays of objects

### ✅ Code Example

```cpp
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mark;
};

bool cmp(Student l, Student r)
{
    return l.mark < r.mark; // Ascending order by marks
}

int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i].name >> a[i].roll >> a[i].mark;

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
        cout << a[i].name << " " << a[i].roll << " " << a[i].mark << endl;

    return 0;
}
```

---

## 🧱 5. Sort Array of Objects (Complex Rule)

📄 **File:** `sort2_array_of_objects.cpp`

### 🔍 What You Learn

- How to sort objects using **multiple rules**
- Tie-breaker logic: sort by **marks descending**, then **roll ascending**

### ✅ Code Example

```cpp
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mark;
};

bool cmp(Student l, Student r)
{
    return l.mark == r.mark ? l.roll < r.roll : l.mark > r.mark;
}

int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i].name >> a[i].roll >> a[i].mark;

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
        cout << a[i].name << " " << a[i].roll << " " << a[i].mark << endl;

    return 0;
}
```

---

## 🧠 Key Takeaways

✔ Arrays of objects allow **bulk management of data**
✔ Always use **temporary objects** for min/max logic
✔ Custom sorting with **`std::sort()` and comparator** is powerful
✔ Tie-breakers make your sorting **real-world ready**

---

## 🎯 Who Should Use This

- Students learning **OOP in C++**
- Competitive programmers
- Beginners moving to **intermediate C++**
- Anyone building **real-world applications** with objects

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
