
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, t;
    cin >> n >> t;
    vector<int> v(n, 0);
    for (int i = 1; i < n; ++i) cin >> v[i];
    v[n] =1;
    for (int i = 1; i <= n; i += v[i]) {
        if (i == t) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}