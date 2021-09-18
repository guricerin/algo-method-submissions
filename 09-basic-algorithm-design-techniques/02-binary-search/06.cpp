#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main()
{
    int n;
    cin >> n;
    vector<int> ws(n);
    rep(i, 0, n)
    {
        cin >> ws[i];
    }

    // 座標圧縮
    // https://drken1215.hatenablog.com/entry/2021/08/09/235400
    auto as = ws;
    sort(all(as));
    // 重複除去
    as.erase(unique(all(as)), as.end());

    // ws[i]が全体の中で何番目に小さいか
    // -> ws[i]がasの何番目の要素に相当するか
    rep(i, 0, n)
    {
        int ng = -1, ok = n;
        while (abs(ok - ng) > 1)
        {
            int mid = (ok + ng) / 2;
            if (as[mid] >= ws[i])
                ok = mid;
            else
                ng = mid;
        }
        cout << ok << endl;
    }
}
