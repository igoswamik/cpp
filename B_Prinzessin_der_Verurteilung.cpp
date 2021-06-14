#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void help(string str, string &res, unordered_map<string, int> &m)
{
    if (m.count(str) == 0)
    {
        if (res == "")
            res = str;
        else
        {
            if (str.size() < res.size())
            {
                res = str;
            }
            else if (str.size() == res.size())
            {
                res = min(res, str);
            }
        }

        return;
    }
    if (res != "" && str.size() > res.size())
        return;

    for (int i = 0; i < 26; i++)
    {
        char ch = 'a' + i;
        string t = "";
        t += ch;
        for (int j = 0; j < str.size(); j++)
        {
            string temp = str;
            temp.insert(j, t);
            help(temp, res, m);
        }
    }
}
void solve(ll n)
{
    string s;
    cin >> s;
    unordered_map<string, int> m;

    for (int i = 0; i < n; i++)
    {
        string t = "";
        for (int j = i; j < n; j++)
        {
            t += s[j];
            m[t]++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        char ch = 'a' + i;
        string str = "";
        str += ch;
        if (m.count(str) == 0)
        {
            cout << str << endl;
            return;
        }
    }
    string res = "";
    for (int i = 0; i < 26; i++)
    {
        char ch = 'a' + i;
        string str = "";
        str += ch;
        help(str, res, m);
        // if (res.size() > 0)
        //     break;
    }
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}