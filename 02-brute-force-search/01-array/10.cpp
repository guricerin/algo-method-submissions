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

    int pos = ans.end() - max_element(ans.begin(), ans.end());
    cout << 9 - pos + 1 << "\n";
}
