#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s = "";
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        s += a;
    }
    cout << s.length() << "\n";
    return 0;
}
