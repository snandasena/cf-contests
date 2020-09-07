#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {

    vector<int> v1(26, 0);
    vector<int> v2(26, 0);

    for (char &c: s1) v1[int(c - 'a')]++;
    for (char &c: s2) v2[int(c - 'a')]++;

    string out = "NO";
    for (int i = 0; i < 26; ++i) {
        if (v1[i] != 0 && v2[i] != 0) {
            out = "YES";
            break;
        }
    }

    return out;

}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
