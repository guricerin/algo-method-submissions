#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, v;
    cin >> n >> v;
    string ans = "No";
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == v)
        {
            ans = "Yes";
        }
    }
    cout << ans << "\n";
    return 0;
}
