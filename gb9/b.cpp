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
        bool ok = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int limit = 0;
                if (i > 0) limit++;
                if (i < n - 1) limit++;
                if (j > 0) limit++;
                if (j < m - 1) limit++;

                int x;
                cin >> x;
                if (x > limit) {
                    ok = false;

                }
            }
        }

        if (!ok) cout << "NO\n";
        else {
            cout << "YES\n";
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (j > 0) cout << " ";
                    int limit = 0;
                    if (i > 0) limit++;
                    if (i < n - 1) limit++;
                    if (j > 0) limit++;
                    if (j < m - 1) limit++;
                    cout << limit;
                }
                cout << "\n";
            }
        }
    }


    return 0;
}
