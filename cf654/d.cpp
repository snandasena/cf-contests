#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {

        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int &i:v) cin >> i;

        map<int, int> cnt;
        int mx = 0;
        for (auto &i:v) {
            if (i % k == 0) continue;
            cnt[k - i % k]++;
            mx = max(mx, cnt[k - i % k]);
        }

        ll ans = 0;
        for (const  auto &par  : cnt) {
            if (par.second == mx) {
                ans = k * 1ll * (par.second - 1) + par.first + 1;
            }
        }
        cout << ans << "\n";

    }


    return 0;
}