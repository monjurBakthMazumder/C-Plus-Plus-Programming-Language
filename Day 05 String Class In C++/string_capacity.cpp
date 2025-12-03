#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Md Monjur Bakth Mazumder";
    cout << s.size() << endl;
    cout << s.max_size() << endl;
    cout << s.capacity() << endl;
    cout << s.empty() << endl;
    s.resize(5) ;
    cout << s << endl;
    s.clear();
    cout << s << endl;
    return 0;
}