#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int func(int x) {
    if (x == 0) return 0;
    return func(x - 1) + x;
}

int main() {
    int n;
    cin >> n;
    cout << func(n) << endl;
}
