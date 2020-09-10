#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    vector<int> v(26, 0);
    for (char &c: s) {
        v[int(c - 'a')]++;
    }

    string ans = "NO";
    for (int i = -1; i < 26; ++i) {
        if (i >= 0 && v[i] == 0) continue;

        if (i >= 0) v[i]--;

        set<int> a;

        for (int j = 0; j < 26; ++j) if (v[j]) a.insert(v[j]);

        if (a.size() == 1) ans = "YES";

        if (i >= 0) v[i]++;
    }

    return ans;

}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
