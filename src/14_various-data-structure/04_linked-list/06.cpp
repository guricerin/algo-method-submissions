#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    deque<int> ls(n);
    rep(i, 0, n) ls[i] = i + 1;

    while (ls.size() > 1) {
        ls.pop_front();
        int a = ls.front();
        ls.pop_front();
        ls.push_back(a);
    }
    cout << ls[0] << endl;
}
