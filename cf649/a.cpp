#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n, x, a;
    cin >> t;
    while (t--) {
        int l = -1, r = 0, sum = 0;
        cin >> n >> x;
        for (int i = 0; i < n; ++i) {
            cin >> a;
            if (a % x) {
                if (l == -1) {
                    l = i;
                }
                r = i;
            }
            sum += a;
        }

        if (sum % x) {
            cout << n << "\n";
        } else if (l == -1) {
            cout << "-1\n";
        } else {
            cout << n - min(l + 1, n - r) << "\n";
        }

    }
    return 0;
}