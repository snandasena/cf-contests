#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        int n;
        cin >> n >> s;
        stack<char> stack;

        for (char k : s) {
            if (k == '(') stack.push('(');
            else {
                if (!stack.empty()) {
                    stack.pop();
                }
            }
        }

        if (stack.empty()) cout << 0 << "\n";
        else {
            cout << stack.size() << "\n";
        }

    }

    return 0;
}