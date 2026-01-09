#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // 1. THE 'this' POINTER
    // The inputs are named 'roll', 'cls', 'gpa'.
    // The class variables are ALSO named 'roll', 'cls', 'gpa'.
    // The computer gets confused: "Which 'roll' do you mean?"
    // 'this->roll' means: "The variable belonging to THIS object."
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll; 
        this->cls = cls;
        this->gpa = gpa;
    }
};

// 2. THE FUNCTION RETURN TYPE
// 'Student *fun()' means this function will return a POINTER (an address),
// not the object itself.
Student *fun()
{
    // 3. DYNAMIC CREATION
    // 'new' requests memory from the Heap.
    // It builds the Student there and returns the ADDRESS of that memory.
    // Because it's on the Heap, it survives after this function returns.
    Student *a = new Student(45, 5, 4.45);
    
    return a; // We return the address (pointer) to main.
}

int main()
{
    // 4. CATCHING THE POINTER
    // We need a pointer variable (*a) to store the address coming from fun().
    Student *a = fun();

    // 5. THE ARROW OPERATOR (->)
    // When you have a pointer, you can't use the dot (.) to access data.
    // You must use the arrow (->).
    // 'a->roll' means: "Go to the address 'a' points to, and get the roll."
    cout << a->roll << " " << a->cls << " " << a->gpa << endl;

    // (Optional but good practice)
    // Since we created it with 'new', we should clean it up manually later.
    // delete a; 

    return 0;
}