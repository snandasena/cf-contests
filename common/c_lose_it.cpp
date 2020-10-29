#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<int> p({4, 8, 15, 16, 23, 42});
    int n;
    cin >> n;
    vector<int> v(n);

    for (int &i: v) {
        cin >> i;
        i = static_cast<int>(lower_bound(p.begin(), p.end(), i) - p.begin());
    }

    vector<int> sq(6);
    for (int &i: v) {
        if (i == 0) ++sq[0];
        else if (sq[i - 1] > 0) {
            --sq[i - 1];
            ++sq[i];
        }
    }

    cout << n - sq[5] * 6;

    return 0;
}