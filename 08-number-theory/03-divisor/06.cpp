#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

/// n以下の平方数の個数
i64 square_nums(i64 n)
{
    const double eps = 1e-9;
    i64 sq = (i64)(sqrt(n) + eps);
    return sq;
}

int main()
{
    int n;
    cin >> n;
    cout << square_nums(n) << endl;
}
