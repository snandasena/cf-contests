#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s) {
    int len = static_cast<int>(s.length());
    int col = static_cast<int>(ceil(sqrt(len)));
    string ans;
    for (int i = 0; i < col; ++i) {
        for (int j = i; j < len; j += col) {
            ans += s[j];
        }
        ans += ' ';
    }

    return ans;
}

    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
