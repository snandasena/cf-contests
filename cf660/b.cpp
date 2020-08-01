#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int x = (n + 3) / 4;
        for (int i = 0; i < n - x; ++i) cout << 9;
        for (int i = 0; i < x; ++i) cout << 8;
        cout << "\n";
    }

    return 0;
}