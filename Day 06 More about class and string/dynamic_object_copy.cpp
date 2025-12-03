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
    cout << dhoni->country << " " << dhoni->jersey << endl;
    cout << kohli->country << " " << kohli->jersey << endl;

    // wrong
    // kohli = dhoni;
    // cout << dhoni->jersey << " " << kohli->jersey << endl;

    // delete dhoni;
    // cout << kohli->country << " " << kohli->jersey << endl;

    // 1
    // kohli->jersey = dhoni->jersey;
    // kohli->country = dhoni->country;

    // delete dhoni;
    // cout << kohli->country << " " << kohli->jersey << endl;

    // 2 
    *kohli = *dhoni;

    delete dhoni;
    cout << kohli->country << " " << kohli->jersey << endl;

    return 0;
}