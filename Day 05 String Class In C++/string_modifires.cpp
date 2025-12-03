#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "monjur";
    string s2 = "mazumder";
    // s+=s2;
    s.append(s2);
    cout << s << endl;

    s.push_back('A');
    cout << s << endl;

    s.pop_back();
    cout << s << endl;

    s.pop_back();
    cout << s << endl;
    
    s = "Monjur Bakth";
    cout << s << endl;

    s.assign("Monjur Bakth Mazumder");
    cout << s << endl;

    // (from, count)
    s.erase(7,6);
    cout << s << endl;

    s = "Monjur Bakth Mazumder";
    s.replace(7,5, "Bangladesh");
    cout << s << endl;
    
    s.insert(18,"Bakth ");
    cout << s << endl;
    

    return 0;
}