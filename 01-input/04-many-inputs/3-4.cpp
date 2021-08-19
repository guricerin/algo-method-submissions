#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (auto a : v)
    {
        if (a % 3 == 0)
        {
            cout << a << "\n";
        }
    }
    return 0;
}
