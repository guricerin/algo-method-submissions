#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    vector<char> v;
    v.push_back('A');
    v.push_back('B');
    v.push_back('C');
    v.pop_back();
    v.push_back('X');
    v.push_back('Y');
    v.push_back('Z');
    v.pop_back();
    for (auto a : v) {
        cout << a << endl;
    }
}
