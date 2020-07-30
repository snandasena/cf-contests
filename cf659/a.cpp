#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n;
        string s(200, 'a');
        cout << s << "\n";
        while (n--) {
            cin >> x;
            if (s[x] == 'a') s[x] = 'b';
            else s[x] = 'a';
            cout << s << "\n";
        }
    }

    return 0;
}