#include <bits/stdc++.h>

using namespace std;

// Complete the abbreviation function below.
string abbreviation(string a, string b) {
    auto al = a.length(), bl = b.length();
    bool dp[1005][1005];
    for (int i = 0; i <= al; ++i) {
        for (int j = 0; j <= bl; ++j) {
            dp[i][j] = false;
        }
    }
    dp[0][0] = true;

    for (int i = 0; i < al; ++i) {
        for (int j = 0; j <= bl; ++j) {
            if (dp[i][j]) {
                if (j < bl && toupper(a[i]) == b[j]) {
                    dp[i + 1][j + 1] = true;
                }

                if (islower(a[i])) {
                    dp[i + 1][j] = true;
                }
            }
        }
    }

    return dp[al][bl] ? "YES" : "NO";
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string a;
        getline(cin, a);

        string b;
        getline(cin, b);

        string result = abbreviation(a, b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
