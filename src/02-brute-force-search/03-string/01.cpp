#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char c;
    cin >> c;
    bool ok = false;
    for (auto a : s)
    {
        if (a == c)
            ok = true;
    }
    if (ok)
        cout << "Yes\n";
    else
        cout << "No\n";
}
