#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(string s)
{
    int l = 0;
    int r = s.length() - 1;
    while (l <= r)
    {
        if (s[l] != s[r])
        {
            string ans = s.substr(0, l + 1) + 'a' + s.substr(l + 1);
            cout << "YES" << endl;
            cout << ans << endl;
            return;
        }
        else if (s[l] == s[r] && s[l] != 'a')
        {
            string ans = s.substr(0, l) + 'a' + s.substr(l);
            cout << "YES" << endl;
            cout << ans << endl;
            return;
        }
        else
        {
            l++;
            r--;
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
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}