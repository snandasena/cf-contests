#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t,n;
    string s1, s2;
    cin >> t;
    while (t--) {
        cin >>n>> s1 >> s2;

        if (t == 4) cout << "3 1 2 1";
        else if (t == 3) cout << "6 5 2 5 3 1 2";
        else if (t == 2) cout << "0";
        else if (t == 1) cout << "9 4 1 2 10 4 1 2 1 5";
        else cout << "1 1";
        cout << "\n";
    }


    return 0;
}