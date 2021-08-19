#include <bits/stdc++.h>
using namespace std;

int main()
{
    auto a = vector<int>(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>{});
    cout << a[0] << "\n";
    return 0;
}
