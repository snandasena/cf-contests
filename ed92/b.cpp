#include <bits/stdc++.h>

using namespace std;
vector<int> a;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n, k, z;
    cin >> t;
    while (t--) {
        cin >> n >> k >> z;
        a = vector<int>(n);
        for (int &i: a)cin >> i;

        int s = 0, mx = 0, ans = 0;

        for (int i = 0; i <= z; ++i) {
            int pos = k - 2 * i;
            if (pos < 0) continue;

            mx = 0, s = 0;
            for (int j = 0; j <= pos; ++j) {
                if (j < n - i) {
                    mx = max(mx, a[j] + a[j + 1]);
                }

                s += a[j];
            }

            ans = max(ans, s + mx * i);
        }

        cout << ans << "\n";

    }

    return 0;
}