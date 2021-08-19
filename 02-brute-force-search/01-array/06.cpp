#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> as(n);
    for (int i = 0; i < n; i++)
    {
        cin >> as[i];
    }

    cout << *max_element(as.begin(), as.end()) << "\n";
    return 0;
}
