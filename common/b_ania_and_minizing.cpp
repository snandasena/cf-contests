#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k;
    string s;
    cin >> n >> k >> s;
    if (n == 1) cout << 0;
    else {
        if (s[0] != '1') {
            s[0] = '1';
            --k;
            for (int i = 1; i < n; ++i) {
                if (s[i] != '0' && k > 0) {
                    s[i] = '0';
                    --k;
                }

                if (k == 0) break;
            }
            cout << s;
        } else {
            for (int i = 1; i < n; ++i) {
                if (s[i] != '0' && k > 0) {
                    s[i] = '0';
                    --k;
                }

                if (k == 0) break;
            }
            cout << s;
        }
    }

    return 0;
}