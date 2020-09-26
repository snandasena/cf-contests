

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    sort(v.begin() + 1, v.end());
    int m = (n - 1) >> 1;
    cout << m << "\n";
    for (int i = 1; i <= m; ++i) {
        cout << v[m + i] << " " << v[i] << " ";
    }

    if (n & 1) cout << v[n];
    else cout << v[n - 1] << " " << v[n];

    return 0;
}