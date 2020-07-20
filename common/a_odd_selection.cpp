#include <bits/stdc++.h>

using namespace std;
int f[2];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n, x, a;
    cin >> t;
    while (t--) {
        f[0] = f[1] = 0;
        cin >> n >> x;
        for (int i = 0; i < n; i++) {
            cin >> a;
            f[a % 2]++;
        }
        int ok = 0;
        for (int i = 1; i <= f[1] && i <= x; i += 2) {
            if (x - i <= f[0]) ok = 1;
        }

        if (ok) cout << "Yes\n";
        else cout << "No\n";

    }
    return 0;
}