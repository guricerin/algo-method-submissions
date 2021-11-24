#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

int main()
{
    int ans = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (gcd(i, 1024) == 1)
            ans++;
    }
    cout << ans << "\n";
}
