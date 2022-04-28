#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    vector<int> pangram(26, 0);
    rep(i, 0, n) {
        string w;
        cin >> w;
        for (auto c : w) {
            pangram[c - 'a']++;
        }
    }

    bool ok = true;
    for (auto i : pangram) {
        if (i < 1) ok = false;
    }
    cout << (ok ? "Yes" : "No") << endl;
}
