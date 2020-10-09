#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int m, sum = 0, x, y;
    cin >> m;
    vector<int> v(m);
    for (int &i: v) {
        cin >> i;
        sum += i;
    }

    cin >> x >> y;
    int mx = 0;
    for (int i = 0; i < m; ++i) {
        mx += v[i];
        sum -= v[i];
        if (x <= mx && mx <= y && x <= sum && sum <= y) {
            cout << i + 2;
            return 0;
        }
    }

    cout << 0;
    return 0;

}