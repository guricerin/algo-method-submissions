#include <bits/stdc++.h>
using namespace std;

bool is_palindrome_number(int n)
{
    string s = to_string(n);
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
    int l, r;
    cin >> l >> r;
    int ans = 0;
    for (int i = l; i <= r; i++)
    {
        if (is_palindrome_number(i))
            ans++;
    }
    cout << ans << "\n";
}
