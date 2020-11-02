#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto &c: s) {
            if (c == '(' || c == '[' || c == '{') st.push(c);
            else {
                if (st.empty()) return false;

                auto tc = st.top();
                if (abs(int(c) - int(tc)) > 2) return false;
                st.pop();
            }
        }

        return st.empty();
    }
};


class Solution2 {
public:
    bool isValid(string s) {
        map<char, char> mp = {{'(', ')'},
                              {'{', '}'},
                              {'[', ']'}};
        stack<char> st;
        for (char &c: s) {
            if (mp.count(c) > 0) st.push(c);
            else {
                if (st.empty()) return false;

                auto tc = st.top();
                if (mp[c] != tc) return false;
                st.pop();
            }
        }

        return st.empty();
    }
};


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    auto *solution = new Solution();
    string x;
    cin >> x;
    cout << solution->isValid(x);
    return 0;
}