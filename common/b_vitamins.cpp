#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const int INF = 1000000;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, c;
    string s;
    cin >> t;
    map<string, int> mp;
    while (t--) {
        cin >> c >> s;
        sort(s.begin(), s.end());
        if(mp[s] == 0){
            mp[s] = c;
        } else{
            mp[s] = min(mp[s], c);
        }
    }

    if (mp["A"] == 0) mp["A"] = INF;
    if (mp["B"] == 0) mp["B"] = INF;
    if (mp["C"] == 0) mp["C"] = INF;
    if (mp["AB"] == 0) mp["AB"] = INF;
    if (mp["AC"] == 0) mp["AC"] = INF;
    if (mp["BC"] == 0) mp["BC"] = INF;
    if (mp["ABC"] == 0) mp["ABC"] = INF;


    int ans = mp["A"] + mp["B"] + mp["C"];
    ans = min(ans, mp["AB"] + mp["C"]);
    ans = min(ans, mp["AC"] + mp["B"]);
    ans = min(ans, mp["BC"] + mp["A"]);

    ans = min(ans, mp["AB"] + mp["AC"]);
    ans = min(ans, mp["AB"] + mp["BC"]);
    ans = min(ans, mp["AC"] + mp["BC"]);

    ans = min(ans, mp["ABC"]);

    cout << (ans >= INF ? -1 : ans);

    return 0;
}