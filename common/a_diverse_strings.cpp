#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int t;
string s;

void solve()
{
    cin >> s;
    sort(s.begin(), s.end());
    for (int i = 1; i < (int) s.length(); ++i)
    {
        if (int(s[i]) != int(s[i - 1]) + 1)
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}