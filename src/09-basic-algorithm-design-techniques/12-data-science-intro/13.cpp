#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int ave, sd, a0, a1;
    cin >> ave >> sd >> a0 >> a1;

    int toave = a0 + a1 * ave;
    int tosd = sd * a1;
    cout << toave << " " << tosd << endl;
}
