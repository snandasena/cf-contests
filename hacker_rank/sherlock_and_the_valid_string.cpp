#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    vector<int> v(26, 0);
    for (char &c: s) {
        v[int(c - 'a')]++;
    }

    vector<int> a;
    for (int &i: v) if (i != 0) a.emplace_back(i);

    sort(a.begin(), a.end());

    if (a.front() == a.back()) return "YES";
    else {
        int x = a[1] - a[0];
        int c = x == 0 ? 0 : 1;
        int mx = x;
        for (int i = 2; i < a.size(); ++i) {
            int k = a[i] - a[0];
            if (k != x) {
                c++;
                mx = max(k, mx);
            }
        }

        if (c > 1 || mx > 1) return "NO"; // todo
        else return "YES";

    }

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
