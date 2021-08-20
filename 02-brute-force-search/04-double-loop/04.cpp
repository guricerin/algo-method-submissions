#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto c : s)
    {
        mp.insert(pair<char, int>(c, 0));
    }
    cout << mp.size() << "\n";
}
