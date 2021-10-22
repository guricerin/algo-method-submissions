#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

random_device rnd;
mt19937 mt(rnd());

// [0, n)
int random(int n) {
    return mt() % n;
}

vector<int> qsort(vector<int> xs) {
    if (xs.empty()) {
        return vector<int>();
    }

    vector<int> ls, rs;
    int mid = random(xs.size());
    int pivot = xs[mid];
    rep(i, 0, xs.size()) {
        if (i == mid) continue;

        if (xs[i] < pivot) {
            ls.push_back(xs[i]);
        } else if (xs[i] > pivot) {
            rs.push_back(xs[i]);
        } else {
            if (random(2))
                ls.push_back(xs[i]);
            else
                rs.push_back(xs[i]);
        }
    }

    ls = qsort(ls);
    rs = qsort(rs);

    ls.push_back(pivot);
    ls.insert(ls.end(), all(rs));
    return ls;
}

int main() {
    int n;
    cin >> n;
    vector<int> as(n);
    rep(i, 0, n) cin >> as[i];

    auto ans = qsort(as);
    for (auto a : ans) {
        cout << a << " ";
    }
    cout << endl;
}
