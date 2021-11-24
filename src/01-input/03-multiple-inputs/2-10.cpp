#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n, m;
    cin >> n >> m;
    n--;
    m--;
    auto a = s[n];
    s[n] = s[m];
    s[m] = a;
    cout << s << "\n";
    return 0;
}
