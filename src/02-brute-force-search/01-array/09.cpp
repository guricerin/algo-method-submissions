#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ans(9);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        a--;
        ans[a]++;
    }

    for (int i = 0; i < 9; i++)
    {
        cout << ans[i] << "\n";
    }
}
