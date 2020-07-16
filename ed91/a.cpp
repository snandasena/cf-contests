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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &i: v) cin >> i;

        bool br = 0;
        for (int i = 0; i < n - 2; i++) {
            if (v[i] < v[i + 1] && v[i + 1] > v[i + 2]) {
                cout << "YES\n";
                cout << i + 1 << " " << i + 2 << " " << i + 3 << "\n";
                br = 1;
                break;
            }
        }

        if (!br) {
            cout << "NO\n";
        }
    }

    return 0;
}