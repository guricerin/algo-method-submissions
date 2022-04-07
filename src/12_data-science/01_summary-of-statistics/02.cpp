#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    double sum = 0;
    rep(i, 0, n) {
        int a;
        cin >> a;
        sum += a;
    }
    cout << fixed << setprecision(10) << sum / (double)n << endl;
}
