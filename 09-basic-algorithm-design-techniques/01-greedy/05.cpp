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

    // 3の倍数に近づけてから一気に3で割る。これを繰り返す。
    int ans = 1;
    while (n > 1)
    {
        if (n == 2)
        {
            ans++;
            break;
        }
        int rem = n % 3;
        ans += rem;
        n -= rem;
        if (n <= 1)
            break;
        if (n % 3 == 0)
        {
            n /= 3;
            ans++;
        }
    }

    cout << ans << endl;
}
