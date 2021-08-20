#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

int main()
{
    int prev = 180 % 13;
    int next = 13 - prev;
    string s = to_string(next);
    if (next < 10)
        s = "0" + s;
    cout << "11:" << s << "\n";
}
