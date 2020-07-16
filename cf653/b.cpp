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
        ll n;
        cin >> n;
        int ans = 0;
        ll i = n;
        bool brek = 0;
        for (i = n; i > 1;) {
            if (i % 6 != 0) {
                if ((i * 2) % 3 == 0) {
                    i = (i * 2) / 6;
                    ans++;
                    ans++;
                } else {
                    cout << -1 << "\n";
                    brek = 1;
                    break;
                }
            } else {
                i /= 6;
                ans++;
            }
        }

        if(!brek){
            cout << ans << "\n";
        }

    }
    return 0;
}