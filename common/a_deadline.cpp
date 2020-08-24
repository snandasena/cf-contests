#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    ll n, d;
    cin >> t;
    while (t--) {
        cin >> n >> d;
        int x = static_cast<int>(sqrt(d)) + 10;
        string s = "NO\n";
        for (int i = 0; i <= x; ++i) {
            int day = static_cast<int>(d + i) / (i + 1) + i;
            if (day <= n) {
                s = "YES\n";
                break;
            }
        }
        cout << s;

    }

    return 0;
}