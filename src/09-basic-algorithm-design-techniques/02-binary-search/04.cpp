#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> as(n), bs(m);
    rep(i, 0, n) cin >> as[i];
    rep(i, 0, m) cin >> bs[i];

    sort(all(as));
    rep(k, 0, m)
    {
        int ok = -1, ng = n;
        while (abs(ok - ng) > 1)
        {
            int mid = (ok + ng) / 2;
            if (as[mid] <= bs[k])
                ok = mid;
            else
                ng = mid;
        }

        cout << (ok > -1 ? (ok + 1) : 0) << endl;
    }
}
