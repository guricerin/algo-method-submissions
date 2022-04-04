#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> as(n);
    rep(i, 0, n) cin >> as[i];

    sort(all(as));
    i64 ans = 0;
    rep(i, 0, n)
    {
        int ok = n, ng = -1;
        while (abs(ok - ng) > 1)
        {
            int mid = (ok + ng) / 2;
            if (as[i] + as[mid] >= k)
                ok = mid;
            else
                ng = mid;
        }
        ans += (i64)(n - ok);
    }

    cout << ans << endl;
}
