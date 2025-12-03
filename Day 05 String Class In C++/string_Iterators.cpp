#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s ="Md Monjur Bakth Mazumder";
    cout << *s.begin() << endl;
    cout << *(s.end()-1)<< endl;

    for(int i=0; i < s.size() ; i++){
        cout << s[i] << " ";
    }

    cout << endl;
    cout << endl;

    for(string:: iterator j = s.begin(); j < s.end()  ; j++){
        cout << *j << " ";
    }
    cout << endl;
    cout << endl;

    for(auto j = s.begin(); j < s.end()  ; j++){
        cout << *j << " ";
    }

    return 0;

}