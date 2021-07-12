#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    ll m;
    cin >> m;
    unordered_map<char, ll> m1;
    ll arr[m][26];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            arr[i][j] = 0;
        }
    }
    vector<string> v2;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v2.push_back(s);

        for (int j = 0; j < m; j++)
        {
            // m1[s[j]]++;
            ll x = s[j] - 'a';
            arr[j][x]++;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            ll x = s[j] - 'a';
            arr[j][x]--;
        }
    }

    string res = "";

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (arr[i][j] == 1)
            {
                char ch = 'a' + j;
                res += ch;
            }
        }
    }
    cout << res << endl;
    cout << flush;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        // string str; //for reading empty line
        // getline(cin, str);
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}