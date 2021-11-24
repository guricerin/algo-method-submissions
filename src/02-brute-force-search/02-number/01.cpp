#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!(i % 2 == 0 || i % 3 == 0 || i % 5 == 0))
        {
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}
