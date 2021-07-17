#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isgood(vector<ll> &v, int i, int j)
{

    for (int l = i; l <= j; l++)
    {
        for (int m = l + 1; m <= j; m++)
        {
            for (int n = m + 1; n <= j; n++)
            {
                if ((v[l] >= v[m] && v[m] >= v[n]) || (v[l] <= v[m] && v[m] <= v[n]))
                {
                    return false;
                }
            }
        }
    }
    return true;
}

void solve(ll n)
{
    vector<ll> v1;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v1.push_back(x);
    }

    ll res = n + n - 1;
    for (ll l = 3; l <= 4 && l <= n; l++)
    {
        ll i = 0, j = l - 1;
        while (j < n)
        {
            if (isgood(v1, i, j))
            {
                res++;
            }
            i++;
            j++;
        }
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
        // string str; //for reading empty line
        // getline(cin, str);
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}