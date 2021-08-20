#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s)
{
    bool ok = true;
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - i - 1])
            ok = false;
    }
    return ok;
}

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (is_palindrome(s))
            ans++;
    }
    cout << ans << "\n";
}
