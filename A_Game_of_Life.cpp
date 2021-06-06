#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n, ll m)
{
    string s;
    cin >> s;
    string res = "";
    ll i = 0;
    //cout << "bef" << res << endl;
    while (i < n && s[i] != '1')
    {
        res += s[i];
        i++;
    }
    // cout << "before" << res <<i<< endl;
    if (i == n)
    {
        cout << res << endl;
        return;
    }
    int j = res.size() - 1;
    ll r = m;
    while (j >= 0 && r > 0)
    {
        res[j] = '1';
        j--;
        r--;
    }
    ll pre = -1;
    //cout << res << endl;
    while (i < n)
    {
        pre = i;
        res += '1';
        //cout << pre << " " << res << endl;
        while (i + 1 < n && s[i + 1] == '0')
        {
            i++;
        }
        if (i == n - 1)
        {
            ll k = pre + 1;
            ll r = m;
            while (k < n)
            {
                if (r > 0)
                {
                    res += '1';
                }
                else
                {
                    res += '0';
                }
                r--;
                k++;
            }
        }
        else
        {
            ll zero = i - pre;
            ll one = min(m, zero / 2);
            ll rem = zero - 2 * one;
            for (int k = 0; k < one; k++)
                res += '1';
            for (int k = 0; k < rem; k++)
                res += '0';
            for (int k = 0; k < one; k++)
                res += '1';
        }
        i++;
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
        ll n, m;
        cin >> n >> m;
        solve(n, m);
    }
    return 0;
}