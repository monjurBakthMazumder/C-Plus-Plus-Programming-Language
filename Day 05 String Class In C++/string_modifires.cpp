#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "monjur";
    string s2 = "mazumder";

    // -------------------------------------------------
    // 1. ADDING STRINGS (Concatenation)
    // -------------------------------------------------
    // You can use '+' or '.append()' to glue words together.
    // s += s2; // This is the shortcut way
    s.append(s2); 
    cout << "After append: " << s << endl; // Output: monjurmazumder

    // -------------------------------------------------
    // 2. ADDING ONE CHARACTER (Push Back)
    // -------------------------------------------------
    // push_back() adds exactly ONE character to the end.
    // Think of it like adding a period at the end of a sentence.
    s.push_back('A'); 
    cout << "After push_back: " << s << endl; // ...mazumderA

    // -------------------------------------------------
    // 3. REMOVING ONE CHARACTER (Pop Back)
    // -------------------------------------------------
    // pop_back() deletes the LAST character.
    s.pop_back(); // Removes 'A'
    cout << "After pop_back 1: " << s << endl;

    s.pop_back(); // Removes 'r' (from mazumder)
    cout << "After pop_back 2: " << s << endl;

    // -------------------------------------------------
    // 4. ASSIGNING (Overwriting)
    // -------------------------------------------------
    // Simple assignment '=' wipes the old value and puts a new one.
    s = "Monjur Bakth"; 
    cout << "After = : " << s << endl;

    // .assign() does the exact same thing (it's just the formal way).
    s.assign("Monjur Bakth Mazumder");
    cout << "After assign: " << s << endl;

    // -------------------------------------------------
    // 5. ERASING (Deleting a chunk)
    // -------------------------------------------------
    // Syntax: s.erase(startIndex, count);
    // "Go to index 7, and delete the next 6 characters."
    // "Monjur Bakth Mazumder" -> Index 7 is 'B'.
    // It deletes "Bakth " (6 chars).
    s.erase(7, 6); 
    cout << "After erase: " << s << endl; // Output: Monjur Mazumder

    // -------------------------------------------------
    // 6. REPLACING (Swap text)
    // -------------------------------------------------
    s = "Monjur Bakth Mazumder";
    // Syntax: s.replace(startIndex, howManyToDelete, "NewString");
    // "Go to index 7 ('B'), delete 5 chars ("Bakth"), and put "Bangladesh" there."
    s.replace(7, 5, "Bangladesh"); 
    cout << "After replace: " << s << endl; // Monjur Bangladesh Mazumder

    // -------------------------------------------------
    // 7. INSERTING (Squeezing text in)
    // -------------------------------------------------
    // Syntax: s.insert(startIndex, "Text");
    // "Go to index 18, and squeeze "Bakth " in (shifting everything else right)."
    s.insert(18, "Bakth "); 
    cout << "After insert: " << s << endl;

    return 0;
}