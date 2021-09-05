#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main()
{
    i64 n;
    cin >> n;

    i64 ans = numeric_limits<i64>::max();
    for (i64 i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans = min(ans, i + (n / i));
        }
    }

    cout << ans << endl;
}
