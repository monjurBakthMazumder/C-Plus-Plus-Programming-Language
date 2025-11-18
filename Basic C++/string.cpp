#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    cin.ignore();
    char s[100];
    // cin >> s;
    // cout << s << endl;
    cin.getline(s, 100);
    cout << x << endl;
    cout << s << endl;

    return 0;
}
