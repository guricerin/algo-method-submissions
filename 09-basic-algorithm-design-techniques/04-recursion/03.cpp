#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int f(int x) {
    if (x < 2) return x;
    return f(x - 1) + f(x - 2);
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
}
