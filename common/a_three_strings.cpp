#include <bits/stdc++.h>

using namespace std;
using ll = long long;
string a, b, c;

void solve()
{
    cin >> a >> b >> c;
    for (int i = 0; i < (int) a.length(); ++i)
    {
        if (c[i] != a[i] && c[i] != b[i])
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;

    cin >> n;
    while (n--)
    {
        solve();
    }
    return 0;
}