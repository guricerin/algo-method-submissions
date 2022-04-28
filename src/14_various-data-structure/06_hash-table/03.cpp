#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

i64 calc_hash(string s) {
    const i64 b = 30, m = 1000003;
    i64 res = 0;
    rep(i, 0, s.size()) {
        i64 c = s[s.size() - 1 - i] - 'a' + 1;
        res += (c * (i64)pow(b, i)) % m;
    }
    return res % m;
}

struct Table {
    vector<list<string>> table;

    Table(int len) {
        this->table = vector<list<string>>(len, list<string>());
    }

    void insert(string x) {
        i64 h = calc_hash(x);
        this->table[h].push_back(x);
    }

    void remove(string x) {
        i64 h = calc_hash(x);
        this->table[h].remove(x);
    }

    bool find(string x) {
        i64 h = calc_hash(x);
        for (auto s : table[h]) {
            if (s == x) return true;
        }
        return false;
    }
};

int main() {
    int q;
    cin >> q;
    Table tb = Table(1000010);
    rep(i, 0, q) {
        int type;
        string t;
        cin >> type >> t;
        if (type == 0) {
            tb.insert(t);
        } else if (type == 1) {
            tb.remove(t);
        } else {
            bool ok = tb.find(t);
            cout << (ok ? "Yes" : "No") << endl;
        }
    }
}
