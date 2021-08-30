#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()

bool is_prime(int n)
{
    rep(i, 2, n)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    rep(i, 54, 1 << 29)
    {
        if (is_prime(i))
        {
            cout << i << endl;
            return 0;
        }
    }
}
