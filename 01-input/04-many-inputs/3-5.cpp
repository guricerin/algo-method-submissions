#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[n - 1 - i];
    }
    for (auto a : v)
    {
        cout << a << "\n";
    }
    return 0;
}
