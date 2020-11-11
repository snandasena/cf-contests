#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, ans = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; ++i)
    {
        if (int(s[i] - '0') % 2 == 0)
        {
            ans += (i + 1);
        }
    }
    cout << ans;
    return 0;
}