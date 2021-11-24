#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, v;
    cin >> n >> v;
    vector<int> as(n);
    for (int i = 0; i < n; i++)
    {
        cin >> as[i];
    }

    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (as[i] == v)
        {
            ans = i + 1;
        }
    }
    cout << ans << "\n";
    return 0;
}
