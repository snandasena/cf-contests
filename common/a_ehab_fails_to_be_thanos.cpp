#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(2 * n);

    double sum = 0.0;
    for (int &i: v) {
        cin >> i;
        sum += i * 1.0;
    }

    sort(v.begin(), v.end());
    double half = 0.0;
    for (int i = 0; i < n; ++i) {
        half += v[i] * 1.0;
    }

    if (sum / 2 != half) {
        for (int &i: v) {
            cout << i << " ";
        }
    } else {
        cout << -1;
    }

    return 0;
}