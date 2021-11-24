#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

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

    // 約数が偶数個の数値は生存
    // -> 平方数は死亡
    cout << (n - square_nums(n)) << endl;
}
