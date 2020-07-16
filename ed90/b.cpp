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
        string s;
        cin >> s;

        int o = 0;
        int z = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') o++;
            else z++;
        }
        int mx = min(o, z);
        if (mx % 2 != 0) cout << "DA\n";
        else cout << "NET\n";
    }

    cout << "\n";
    return 0;
}
