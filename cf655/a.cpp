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

        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                cout << i - 1 << " ";
            } else {
                cout << i <<" ";
            }
        }
        cout << "\n";
    }

    return 0;
}