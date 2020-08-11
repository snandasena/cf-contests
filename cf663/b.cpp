#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n, m;
    char x;
    cin>>t;
    while (t--) {
        cin >> n >> m;
        int ans = 0;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                cin >> x;
                if (i == n && x == 'D') ans++;
                else if (j == m && x == 'R') ans++;
                else if (x == 'C') continue;
            }
        }

        cout << ans << "\n";
    }


    return 0;
}