#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    int n;
    cin >> n;
    deque<int> as(n);
    rep(i, 0, n) as[i] = i + 1;
    while (as.size() > 1) {
        as.pop_front();
        int head = as.front();
        as.push_back(head);
        as.pop_front();
    }
    cout << as[0] << endl;
}
