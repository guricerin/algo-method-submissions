#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n -= 1;
        }
        ans++;
    }

    cout << ans << endl;
}
