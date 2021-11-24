#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main()
{
    i64 a, b;
    cin >> a >> b;

    i64 ans = 0;
    // a % x = b
    // a = (x * y) + b
    // a - b = x * y
    // -> a-b を割り切れるx, y (ただし、x > b, y > b) の個数を探す
    i64 c = a - b;
    for (i64 x = 1; x * x <= c; x++)
    {
        if ((c % x == 0))
        {
            i64 y = c / x;
            if (x == y)
            {
                if (x > b)
                {
                    ans++;
                }
            }
            else
            {
                if (x > b)
                    ans++;
                if (y > b)
                    ans++;
            }
        }
    }

    cout << ans << endl;
}
