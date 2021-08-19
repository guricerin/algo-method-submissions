#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int x;
    if (a % 10 < b % 10)
    {
        x = a;
    }
    else
    {
        x = b;
    }
    cout << x << "\n";
    return 0;
}
