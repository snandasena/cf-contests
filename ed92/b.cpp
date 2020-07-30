#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n, k, z;
    cin >> t;
    while (t--) {
        cin >> n >> k >> z;
        vector<int> v(n);
        for (int &i: v) cin >> i;
        int s = v[0];
        if (z == 0) {
            for (int i = 1; i <= k; i++) {
                if (k < n)s += v[i];
            }
            cout << s << "\n";
        } else {

        }


    }

    return 0;
}