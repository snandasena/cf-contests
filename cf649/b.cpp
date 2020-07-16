#include <bits/stdc++.h>

using namespace std;
int A[1000005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> A[i];

        vector<int> ans;
        for (int i = 1; i <= n; i++) {
            if (i == 1 || i == n || (A[i - 1] < A[i]) != (A[i] < A[i + 1])) {
                ans.emplace_back(A[i]);
            }
        }

        cout << ans.size() << "\n";
        for (int &i : ans) cout << i << " ";
        cout << "\n";
    }

    return 0;
}