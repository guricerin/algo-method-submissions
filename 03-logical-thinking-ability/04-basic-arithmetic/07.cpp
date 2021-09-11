#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main()
{
    int a, k;
    cin >> a >> k;
    rep(i, a, 1 << 29)
    {
        if (i % k == 0)
        {
            cout << i << endl;
            return 0;
        }
    }
}
