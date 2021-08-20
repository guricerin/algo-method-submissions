#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

int main()
{
    int u, t, a;
    cin >> u >> t >> a;
    int prev = (a - u) % t;
    if (prev == 0)
    {
        cout << a << "\n";
    }
    else
    {
        int next = t - prev;
        cout << a + next << "\n";
    }
}
