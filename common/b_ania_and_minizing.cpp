#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k;
    string s;
    cin >> n >> k >> s;

    if (n == k) {
        s[0] = '1';
        for (int i = 1; i < n; ++i) s[i] = '0';

        if (n == 1) cout << 0;
        else cout << s;

        return 0;
    }

    if (s[0] != '1' && k > 0) s[0] = '1', k--;

    for (int i = 1; i < n && k > 0; ++i) {
        if (s[i] != '0') {
            s[i] = '0';
            k--;
        }
    }

    cout << s;
    return 0;
}