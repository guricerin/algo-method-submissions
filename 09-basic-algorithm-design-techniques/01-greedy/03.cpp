#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main()
{
    int x;
    cin >> x;
    vector<int> as(4);
    rep(i, 0, 4) cin >> as[i];
    vector<int> bs{50, 10, 5, 1};

    int ans = 0;
    rep(i, 0, 4)
    {
        while (as[i] > 0 && x >= bs[i])
        {
            x -= bs[i];
            as[i]--;
            ans++;
        }
    }

    cout << ans << endl;
}
