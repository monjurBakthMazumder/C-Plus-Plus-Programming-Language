#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    string country;
    int jersey;

    // Constructor to initialize the object easily
    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};

int main()
{
    // 1. Create two players in the Heap memory
    // 'dhoni' and 'kohli' are pointers holding the addresses.
    Cricketer *dhoni = new Cricketer("India", 100);
    Cricketer *kohli = new Cricketer("India", 18);

    cout << "Before Copying:" << endl;
    cout << dhoni->country << " " << dhoni->jersey << endl;
    cout << kohli->country << " " << kohli->jersey << endl;

    // 🔴 DANGEROUS WAY (Don't do this!)
    // kohli = dhoni; 
    // This just copies the address. Now both point to Dhoni's memory.
    // Kohli's original memory is lost (Memory Leak).
    
    // 🟢 WAY 1: Manual Copy
    // Safe, but tedious if you have 100 variables.
    // kohli->jersey = dhoni->jersey;
    // kohli->country = dhoni->country;

    // 🟢 WAY 2: The Dereference Trick (Best Way) 
    // *dhoni -> gets the actual content inside Dhoni's memory.
    // *kohli -> gets the actual content inside Kohli's memory.
    // This copies the DATA, not the ADDRESS.
    *kohli = *dhoni;

    // 2. Delete Dhoni
    // Since we copied the DATA to separate memory, deleting Dhoni
    // does NOT affect Kohli.
    delete dhoni;

    cout << "After Copying & Deleting Dhoni:" << endl;
    // Kohli still exists and has Dhoni's data!
    cout << kohli->country << " " << kohli->jersey << endl;

    return 0;
}