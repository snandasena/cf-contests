#include <bits/stdc++.h>

using namespace std;
using ll = long long;
vector<ll> v;
ll a, b;

void dfs(ll a) {
    if (a > b) return;
    v.emplace_back(a);
    if (a == b) {
        cout << "YES\n" << v.size() << "\n";
        for (ll &i: v) cout << i << " ";
        exit(0);
    }

    dfs(a * 2);
    dfs(10 * a + 1);
    v.pop_back();
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;
    dfs(a);
    cout << "NO";
    return 0;

}
