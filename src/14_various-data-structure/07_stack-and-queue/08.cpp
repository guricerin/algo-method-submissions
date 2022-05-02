#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    vector<int> as(n);
    rep(i, 0, n) {
        cin >> as[i];
    }

    stack<pair<int, int>> worse_st;
    worse_st.push({0, 0});
    rep(i, 1, n) {
        int a = as[i];
        // i日目のデータより日時が前でスコアが同点以上のものは、候補になることがないため取り除いて良い。
        while (!worse_st.empty() && a <= worse_st.top().first) {
            worse_st.pop();
        }

        int span = abs(i - worse_st.top().second);
        cout << span << endl;
        worse_st.push({a, i});
    }
}
