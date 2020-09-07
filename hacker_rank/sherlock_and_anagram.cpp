#include <bits/stdc++.h>

using namespace std;

// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(string s) {
    int ans = 0;
    int n = (int) s.length();
    map<string, int> mp;

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            string x = s.substr(i, j - i + 1);
            sort(x.begin(), x.end());
            ans += mp[x];
            ++mp[x];
        }
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

        int result = sherlockAndAnagrams(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
