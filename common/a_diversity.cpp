#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    int k;
    cin >> s >> k;

    if (s.length() < k) {
        cout << "impossible";
        return 0;
    }
    vector<int> v(27, 0);
    for (char &c: s) v[int(c - 'a')]++;
    int ans = 0;
    for (int &i: v) {
        if (i >= 1) ans++;
    }
    cout << max(0, k - ans);
    return 0;

}