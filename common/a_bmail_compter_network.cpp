#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n + 3, 0);
    for (int i = 2; i <= n; i++) {
        cin >> v[i];
    }

    vector<int> ans;
    for (int i = n; i; i = v[i]) {
        ans.emplace_back(i);
    }

    reverse( ans.begin(), ans.end());

    for(int &i: ans) cout<<i<<" ";

    return 0;
}