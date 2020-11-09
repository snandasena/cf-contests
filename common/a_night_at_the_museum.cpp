#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;
    int curr = 'a';
    int ans = 0;
    for (auto &c: s)
    {
        ans += min(abs(curr - c), 26 - abs(curr - c));
        curr = c;
    }
    cout << ans;
    return 0;
}