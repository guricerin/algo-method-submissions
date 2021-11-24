#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int l = s.size() / 2;

    bool ok = true;
    for (int i = 0; i < l; i++)
    {
        if (s[i] != s[s.size() - i - 1])
        {
            ok = false;
        }
    }

    if (ok)
        cout << "Yes\n";
    else
        cout << "No\n";
}
