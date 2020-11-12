#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k;
    string s;
    cin >> n >> k >> s;
    vector<int> v(k, 0);
    for (auto &i: s)
    {
        v[i - 'A']++;
    }
    int ans = v[0];
    for (int i = 0; i < k; ++i)
    {
        ans = min(ans, v[i]);
    }
    cout << ans*k;
    return 0;
}