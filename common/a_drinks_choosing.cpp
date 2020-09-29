#include <bits/stdc++.h>

using namespace std;
using ll  = int64_t;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k, x;
    cin >> n >> k;
    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        mp[x]++;
    }

    int ans = 0;
    int cnt = 0;
    for (auto &p: mp) {
        cnt += p.second % 2;
        ans += p.second / 2 * 2;
    }

    ans += (cnt + 1) / 2;
    cout << ans;
    return 0;
}