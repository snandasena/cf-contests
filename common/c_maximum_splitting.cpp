#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mx = 16;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<int> ans(mx, -1);
    ans[0] = 0;
    for (int i = 1; i < mx; ++i) {
        for (auto j : {4, 6, 9}) {
            if (i >= j && ans[i - j] != -1) {
                ans[i] = max(ans[i], ans[i - j] + 1);
            }
        }
    }

    int q, x;
    cin >> q;
    while (q--) {
        cin >> x;
        if (x < mx) {
            cout << ans[x] << "\n";
        } else {
            int t = (x - mx) / 4 + 1;
            cout << t + ans[x - 4 * t] << "\n";
        }
    }

    return 0;

}