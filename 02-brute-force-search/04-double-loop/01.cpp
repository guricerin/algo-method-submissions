#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1)
        return false;

    bool res = true;
    for (int p = 2; p * p <= n; p++)
    {
        if (n % p == 0)
        {
            res = false;
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (is_prime(a))
            ans++;
    }
    cout << ans << "\n";
}
