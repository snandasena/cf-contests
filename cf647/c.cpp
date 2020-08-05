#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    ll a, ans;
    while (t--) {
        cin >> a;
        ans = 0;
        for (int i = 0; i < 60; ++i) {
            if (a & (1ll << i)) {
                ans += (1ll << (i + 1)) - 1;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}

