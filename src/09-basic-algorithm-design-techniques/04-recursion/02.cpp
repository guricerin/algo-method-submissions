#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int f(int a, int b, int c) {
    if (c == a) return a;
    return f(a, b, c - 1) + c;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << f(a, b, b) << endl;
}
