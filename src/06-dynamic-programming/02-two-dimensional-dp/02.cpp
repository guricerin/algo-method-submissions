#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

int main()
{
    int n;
    cin >> n;
    int as[n][n];
    memset(as, 0, sizeof(as));
    rep(i, 0, n) cin >> as[0][i];

    rep(i, 1, n)
    {
        rep(j, 0, n)
        {
            if (j - 1 >= 0)
            {
                as[i][j] += as[i - 1][j - 1];
            }
            as[i][j] += as[i - 1][j];
            if (j + 1 < n)
            {
                as[i][j] += as[i - 1][j + 1];
            }
            as[i][j] %= 100;
        }
    }

    cout << as[n - 1][n - 1] << "\n";
}
