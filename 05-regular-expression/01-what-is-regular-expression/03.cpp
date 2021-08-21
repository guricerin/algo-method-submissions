#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

int main()
{
    string s;
    cin >> s;
    regex re(R"(a{1,5}b{10}c*)");
    if (regex_match(s, re))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}
