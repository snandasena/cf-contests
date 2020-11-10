#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string s[22], t[22];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m, q, x;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) cin >> s[i];
    for (int i = 0; i < m; ++i) cin >> t[i];
    cin >> q;
    while (q--)
    {
        cin >> x;
        x--;
        cout << s[x % n] + t[x % m] << "\n";
    }
    return 0;
}