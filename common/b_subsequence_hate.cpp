#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        int s0 = 0, s1 = 0, p0 = 0, p1 = 0;
        for (char &c: s) {
            if (c == '0') ++s0;
            else ++s1;

        }

        int ans = min(s0, s1);
        for (char &c:s) {
            if (c == '0') {
                p0++;
                s0--;
            } else {
                p1++;
                s1--;
            }
            ans = min(ans, p1 + s0);
            ans = min(ans, p0 + s1);
        }

        cout << ans << "\n";
    }

    return 0;
}