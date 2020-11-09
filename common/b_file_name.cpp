#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for (int i = 1; i < n - 1; ++i)
    {
        if (s[i] == 'x' && s[i - 1] == 'x' && s[i + 1] == 'x') ans++;
    }

    cout << ans;
    return 0;
}