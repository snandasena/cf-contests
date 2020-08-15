#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        s.push_back(static_cast<char>('x'));
        vector<int> ans;
        int c = 0;
        for (char i : s) {
            if (i == '1') {
                c++;
            } else {
                if (c != 0) {
                    ans.emplace_back(c);
                }
                c = 0;
            }
        }


        sort(ans.begin(), ans.end(), greater<int>());
        int sum = 0;
        for (int i = 0; i < ans.size(); i += 2) {
            sum += ans[i];
        }

        cout <<sum<< "\n";
    }
    return 0;
}
