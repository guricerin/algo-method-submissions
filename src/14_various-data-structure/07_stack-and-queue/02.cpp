#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i64 = int64_t;

int main() {
    queue<char> q;
    q.push('A');
    q.push('B');
    q.push('C');
    q.pop();
    q.push('X');
    q.push('Y');
    q.push('Z');
    q.pop();
    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
}
