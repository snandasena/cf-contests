#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v(n);
    for (int &i: v) cin >> i;

    bool ok = true;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] == 2) {
            if (v[n - i - 1] == 2) ans += min(a, b);
            else if (v[n - i - 1] == 0) ans += a;
            else ans += b;
        } else if (v[i] != v[n - i - 1] && v[i] != 2 && v[n - i - 1] != 2) {
            ok = false;
            break;
        }
    }

    if (!ok) cout << -1;
    else cout << ans;

    return 0;
}
