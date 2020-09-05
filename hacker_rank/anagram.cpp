#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string s1, string s2) {
    vector<int> a(26, 0);
    vector<int> b(26, 0);

    for (char &c: s1) {
        a[int(c - 'a')]++;
    }

    for (char &c: s2) {
        b[int(c - 'a')]++;
    }

    int ans = 0;
    for (int i = 0; i < 26; ++i) {
        ans += a[i] + b[i] - 2 * min(a[i], b[i]);
    }

    return ans;

}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
