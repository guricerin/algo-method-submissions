#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    for (int i = 0; i < s.size(); i++)
    {
        bool ok = true;
        for (int j = 0; j < t.size(); j++)
        {
            if (s[i + j] != t[j])
            {
                ok = false;
            }
        }
        if (ok)
        {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
}
