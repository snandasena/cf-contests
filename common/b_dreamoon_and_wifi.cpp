#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

string s1, s2;
int way=0, n, e, r = 0;

void dfs(int pos, int idx) {
    if (idx == n) {
        way++;
        if (pos == e) r++;
        return;
    }

    if (s2[idx] == '+') dfs(pos + 1, idx + 1);
    else if (s2[idx] == '-')dfs(pos - 1, idx +1);
    else {
        dfs(pos + 1, idx + 1);
        dfs(pos - 1, idx + 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> s1 >> s2;
    e = 0;
    for (char &c:s1) e += (c == '+' ? 1 : -1);
    n = s2.length();
    dfs(0, 0);

    printf("%.10f", (r + .0) / way);

    return 0;
}