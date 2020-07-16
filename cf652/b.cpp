#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        string res, res2;
        while (!s.empty() && s.back() == '1') {
            res += '1';
            s.pop_back();
        }

        reverse(s.begin(), s.end());
        while (!s.empty() && s.back() == '0') {
            res2 += '0';
            s.pop_back();
        }

        if (!s.empty()) res2 += '0';
        cout << res2 + res << "\n";
    }

    return 0;
}