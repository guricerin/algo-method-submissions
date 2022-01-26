#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    vector<int> ans(5, 0);
    rep(i, 0, n) {
        int a;
        cin >> a;
        if (a <= 20)
            ans[0]++;
        else if (a <= 40)
            ans[1]++;
        else if (a <= 60)
            ans[2]++;
        else if (a <= 80)
            ans[3]++;
        else
            ans[4]++;
    }

    for (auto a : ans) {
        cout << a << endl;
    }
}
