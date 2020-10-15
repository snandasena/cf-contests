#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        vector<ld> v(n);
        ld sm = 0.0;
        for (ld &i: v) {
            cin >> i;
            sm += i;
        }
        if (sm / n >= x) {
            cout << n << "\n";
            continue;
        };

        sort(v.begin(), v.end(), greater<>());
        int ans = 0;
        for (int i = n - 1; i > 0; i--) {
            sm -= v[i];
            if (sm / i >= x) {
                ans = i;
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}