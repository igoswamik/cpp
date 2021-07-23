#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<pair<int, int>, bool> ourmap;
bool check(string &s, int i, string &t, int j)
{
    if (j == t.size())
    {
        if ((s.size() - i) % 2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if (j >= t.size() || i >= s.size())
    {
        return false;
    }

    if (t.size() - j > s.size() - i)
    {
        return false;
    }

    if (ourmap.count(make_pair(i, j)) > 0)
    {
        return ourmap[make_pair(i, j)];
    }

    bool ans = false;
    ans = ans || check(s, i + 2, t, j);
    if (s[i] == t[j])
    {
        ans = ans || check(s, i + 1, t, j + 1);
    }

    ourmap[make_pair(i, j)] = ans;
    return ans;
}

void solve()
{
    string s, t;
    cin >> s >> t;
    if (t.length() > s.length())
    {
        cout << "NO" << endl;
        return;
    }

    if (t.size() == 0)
    {
        cout << "YES" << endl;
        return;
    }

    ourmap.clear();
    for (int i = 0; i <= s.length() - t.length(); i++)
    {
        if (s[i] == t[0])
        {
            if (check(s, i, t, 0))
            {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}