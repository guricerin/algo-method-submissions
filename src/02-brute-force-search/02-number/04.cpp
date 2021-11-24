#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int lim = max(a, b);
    int ans = 1;
    for (int x = 1; x <= lim; x++)
    {
        if (a % x == 0 && b % x == 0)
        {
            ans = max(ans, x);
        }
    }
    cout << ans << "\n";
}
