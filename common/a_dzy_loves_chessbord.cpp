#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    string s;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        for (int j = 0; j < m; ++j) {
            if (s[j] == '.') {
                if ((i + j) & 1) s[j] = 'W';
                else s[j] = 'B';
            }
        }

        cout << s << "\n";
    }

    return 0;

}