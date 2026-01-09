#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // The inputs (roll, cls, gpa) have the SAME NAMES as the variables above.
    Student(int roll, int cls, double gpa)
    {
        // 1. THE ARROW OPERATOR (->)
        // 'this' is a POINTER (an address).
        // To access data from a pointer, we use the Arrow (->).
        // this->roll means: "Go to MY memory address and find the variable 'roll'."
        this->roll = roll; 

        // 2. THE MANUAL WAY (*this)
        // (*this) means: "The Value at this address" (The Object Itself).
        // Since (*this) is an Object, we use the dot (.).
        // Note: We need ( ) because the dot has higher priority than the star *.
        // This line does exactly the same thing as 'this->cls = cls'.
        (*this).cls = cls; 

        // 3. THE STANDARD WAY
        // This is what programmers actually use. It's cleaner.
        this->gpa = gpa; 
    }
};

int main()
{
    Student a(45, 5, 4.45);
    cout << a.roll << " " << a.cls << " " << a.gpa << endl;
    return 0;
}