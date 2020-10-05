#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;
    cout << n + m - 1 << "\n";

    for (int i = 1; i <= n; ++i) cout << i << " 1" << '\n';
    for (int i = 1; i < m; ++i) cout << "1 " << i + 1 << '\n';

    return 0;
}