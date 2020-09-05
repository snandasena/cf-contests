#include <bits/stdc++.h>

using namespace std;

// Complete the palindromeIndex function below.
int palindromeIndex(string str) {
    int i = 0, l = str.length(), j = l - 1;

    int ans = -1;
    for (i, j; i < l; ++i, --j) {
        if (str[i] != str[j]) {
            if (str[i] == str[j - 1]) {
                ans = j;
            } else {
                ans = i;
            }
            break;
        };
    }
    return ans;


}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = palindromeIndex(s);

        cout << result << "\n";
    }

    fout.close();

    return 0;
}
