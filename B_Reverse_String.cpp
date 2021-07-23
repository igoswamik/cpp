#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string s, int i, string t)
{
    string res = "";
    int k = 0;
    for (int j = i; j < s.length(); j++, k++)
    {
        res += s[j];
        if (s[j] != t[k])
            return false;

        int left = t.length() - res.length();
        if (j < left)
        {
            continue;
        }
        int j1 = j - 1;
        int k1 = k + 1;
        bool flag = true;
        while (j1 >= 0 && k1 < t.length())
        {
            if (t[k1] != s[j1])
            {
                flag = false;
                break;
            }
            j1--;
            k1++;
        }
        if (flag)
        {
            return true;
        }
    }
    return false;
}
void solve()
{
    string s, t;
    cin >> s >> t;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == t[0])
        {
            if (check(s, i, t))
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