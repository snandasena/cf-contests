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
        ll res = 0;
        ll crr = 0;
        ll mn = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '+') crr++;
            else crr--;

            if (crr < mn) {
                mn = crr;
                res += i + 1;
            }
        }
        cout << res + s.length() << "\n";
    }

    cout << "\n";
    return 0;
}
