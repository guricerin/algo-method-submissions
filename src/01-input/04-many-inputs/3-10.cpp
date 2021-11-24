#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int l = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        if (a == "left")
        {
            l++;
        }
        else
        {
            r++;
        }
    }

    if (l == r)
    {
        cout << "same\n";
    }
    else if (l < r)
    {
        cout << "right\n";
    }
    else
    {
        cout << "left\n";
    }
    return 0;
}
