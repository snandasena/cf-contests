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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &i:v)cin >> i;

        if (is_sorted(v.begin(), v.end())) {
            cout << 0 << "\n";
            continue;
        } else {
            int stage = 0;
            int ans = 1;
            for (int i = 0; i < n; i++) {
                if (v[i] == i + 1) {
                    if (stage == 1) {
                        stage = 2;
                    }
                } else {
                    if (stage == 0) {
                        stage = 1;
                    } else if (stage == 2) {
                        ans = 2;
                        break;
                    }
                }
            }

            cout << ans << "\n";
        }
    }

    return 0;
}

