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
        vector<int> a(n);
        for (int &i: a) cin >> i;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                if (a[i] < 0) {
                    a[i] = -a[i];
                }
            } else {
                if (a[i] > 0) {
                    a[i] = -a[i];
                }
            }
        }

        for (int &i: a)cout << i << " ";
        cout << "\n";

    }

    cout << "\n";
    return 0;
}
