#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int h;
    cin >> h;
    int mi = pow(2, h);
    int ma = pow(2, h + 1) - 1;
    cout << mi << " " << ma << endl;
}
