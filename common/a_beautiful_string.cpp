#include <bits/stdc++.h>

using namespace std;
using ll  = int64_t;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        n = (int) s.length();
        s = '.' + s + '.';
        bool ok = true;

        for (int i = 1; i <= n; ++i) {
            if (s[i] == '?') {
                if (s[i - 1] != 'a' && s[i + 1] != 'a') s[i] = 'a';
                else if (s[i - 1] != 'b' && s[i + 1] != 'b') s[i] = 'b';
                else s[i] = 'c';
            }
            ok &= s[i] != s[i - 1] && s[i] != s[i + 1];
        }

        if (!ok) cout << "-1\n";
        else cout << s.substr(1, n).append("\n");
    }

    return 0;
}