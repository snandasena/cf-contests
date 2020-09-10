#include <bits/stdc++.h>

using namespace std;

// Complete the substrCount function below.
long substrCount(int n, string s) {
    int i = 0, j, c = 0;
    long ans = 0;
    vector<int> v(n, 0);

    while (i < n) {
        j = i + 1, c = 1;
        while (j < n && s[i] == s[j]) {
            ++j, ++c;
        }

        ans += (c * (c + 1)) >> 1;
        v[i] = c;
        i = j;
    }

    for (int j = 1; j < n - 1; ++j) {
        if (s[j] == s[j - 1]) v[j] = v[j - 1];

        if (s[j - 1] == s[j + 1] && s[j] != s[j - 1]) {
            ans += min(v[j - 1], v[j + 1]);
        }

    }

    return ans;

}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    long result = substrCount(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
