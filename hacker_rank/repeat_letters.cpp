#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long ans = 0;
    long len = s.length();
    for (int i = 0; i < min(len, n); ++i) {
        if (s[i] == 'a') ans++;
    }

    if (n <= len) {
        return ans;
    } else {
        long x = n / len;
        ans *= x;
        for (int i = 0; i < n % len; ++i) {
            if (s[i] == 'a') {
                ans++;
            }
        }
    }

    return ans;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
