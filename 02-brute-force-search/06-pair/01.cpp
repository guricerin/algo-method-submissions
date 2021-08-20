#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> as(n);
    rep(i, 0, n) cin >> as[i];

    int ans = 0;
    rep(i, 0, n) rep(j, i + 1, n)
    {
        if (as[i] + as[j] <= k)
            ans++;
    }
    cout << ans << "\n";
}
