#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t, n, a, b, c;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> a >> b >> c;
        cin >> s;
        int beat = 0;
        string ans(n, '0');
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'R' && b > 0) {
                b--;
                ans[i] = 'P';
                beat++;
            } else if (s[i] == 'P' && c > 0) {
                c--;
                ans[i] = 'S';
                beat++;
            } else if (s[i] == 'S' && a > 0) {
                a--;
                ans[i] = 'R';
                beat++;
            }
        }


        for (int i = 0; i < n; ++i) {
            if (ans[i] == '0') {
                if (a > 0) a--, ans[i] = 'R';
                else if (b > 0) b--, ans[i] = 'P';
                else c--, ans[i] = 'S';
            }
        }

        if (beat < (n + 1) / 2) cout << "NO\n";
        else cout << "YES\n" << ans << "\n";
    }

    return 0;
}