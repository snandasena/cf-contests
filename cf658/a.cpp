#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector<int> v1(n);
        vector<int> v2(m);

        for (int &i: v1) cin >> i;
        for (int &i: v2) cin >> i;

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        bool br = false;
        int e = -1;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (v1[i] == v2[j]) {
                    br = true;
                    e = v1[i];
                    break;
                };
            }
        }

        if (!br) cout << "NO\n";
        else cout << "YES\n" << 1 << " " << e << "\n";
    }


    return 0;
}

