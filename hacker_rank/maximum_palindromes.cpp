#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string ltrim(const string &);

string rtrim(const string &);

vector<string> split(const string &);

/*
 * Complete the 'initialize' function below.
 *
 * The function accepts STRING s as parameter.
 */
const int N = 100001;
const int A = 'z' - 'a' + 1;
const ll MOD = (ll) 1e9 + 7;

int cnt[N][A];
ll fact[N], rfact[N];

ll power(ll x, ll y)
{
    if (y == 0)
    {
        return 1;
    }
    if (y & 1)
    {
        return power(x, y - 1) * x % MOD;
    }
    else
    {
        ll tmp = power(x, y / 2);
        return tmp * tmp % MOD;
    }
}

void initialize(string s)
{
    memset(cnt, 0, sizeof cnt);
    int n = (int) s.length();
    for (int i = 0; i < n; i++)
    {
        cnt[i + 1][s[i] - 'a']++;
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < A; j++)
        {
            cnt[i][j] += cnt[i - 1][j];
        }
    }
    fact[0] = 1;
    rfact[0] = 1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = fact[i - 1] * i % MOD;
        rfact[i] = power(fact[i], MOD - 2);
    }

}

/*
 * Complete the 'answerQuery' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER l
 *  2. INTEGER r
 */

int answerQuery(int l, int r)
{
    // Return the answer for this query modulo 1000000007.
    int sum = 0;
    int odd = 0;
    ll res = 1;
    for (int i = 0; i < A; i++) {
        int cur = cnt[r][i] - cnt[l - 1][i];
        sum += cur / 2;
        res = res * rfact[cur / 2] % MOD;
        if (cur % 2 == 1) {
            odd++;
        }
    }
    res = res * max(1, odd) % MOD;
    res = res * fact[sum] % MOD;
    return static_cast<int>(res);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    initialize(s);

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++)
    {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        int l = stoi(first_multiple_input[0]);

        int r = stoi(first_multiple_input[1]);

        int result = answerQuery(l, r);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
            s.begin(),
            find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
            find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
            s.end()
    );

    return s;
}

vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
