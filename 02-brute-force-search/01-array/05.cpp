#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> as(n);
    for (int i = 0; i < n; i++)
    {
        cin >> as[i];
    }

    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (as[i - 1] < as[i])
        {
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}
