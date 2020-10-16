#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, tf = 0, ft = 0, hd = 0;
    cin >> n;
    vector<int> v(n);

    for (int &i: v) {
        cin >> i;
    }
    string ans = "YES";
    for (int &i: v) {
        if (i == 25) {
            tf++;
        } else if (i == 50) {
            if (tf > 0) {
                tf--;
                ft++;
            } else {
                ans = "NO";
                break;
            }

        } else {
            if (tf > 0 && ft > 0) {
                tf--;
                ft--;
            } else if (tf > 2) {
                tf -= 3;
            } else {
                ans = "NO";
                break;
            }
        }
    }
    cout << ans;
    return 0;

}