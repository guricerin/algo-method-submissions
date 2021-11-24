#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

int main()
{
    int n;
    cin >> n;
    map<string, int> mp;
    rep(i, 0, n)
    {
        string s;
        cin >> s;
        mp[s]++;
    }

    bool ok = false;
    for (auto &[s, c] : mp)
    {
        if (c >= 2)
            ok = true;
    }
    if (ok)
        cout << "Yes\n";
    else
        cout << "No\n";
}
