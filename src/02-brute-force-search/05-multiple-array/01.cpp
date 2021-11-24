#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> as(n), bs(m);
    for (int i = 0; i < n; i++)
    {
        cin >> as[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> bs[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (as[i] > bs[j])
                ans++;
        }
    }
    cout << ans << "\n";
}
