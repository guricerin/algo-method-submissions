#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main()
{
    int ans = 0;
    for (int i = 1; i <= 56; i++)
    {
        if (56 % i == 0)
            ans++;
    }
    cout << ans << endl;
}
