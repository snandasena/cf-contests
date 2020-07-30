#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n;
    string a, b;
    cin >> t;
    while (t--) {
        cin >> n >> a >> b;
        vector<int> ops;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                if (i > 0) ops.emplace_back(i + 1);
                ops.emplace_back(1);
                if (i > 0) ops.emplace_back(i + 1);
            }
        }

        cout << ops.size() << " ";
        for (int &i: ops) cout << i << " ";
        cout << "\n";
    }


    return 0;
}