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
    for (int i = 0; i < n; i += 2)
    {
        if (s[i] == s[i + 1])
        {
            if (s[i] == 'a') s[i] = 'b';
            else s[i] = 'a';
            ans++;
        }
    }

    cout << ans<<"\n"<<s;
    return 0;
}