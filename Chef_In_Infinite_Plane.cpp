#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{

    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    ll s = 2, ans = 0;
    ll i = 0;
    while (i < n && s <= 100000)
    {
        if (v[i] < s)
        {
            i++;
        }
        else if (v[i] > s)
        {
            s++;
        }
        else
        {
            ll c = s - 1;
            while (i < n && v[i] == s && c > 0)
            {
                ans++;
                i++;
                c--;
            }
            s++;
        }
    }
    cout << ans << endl;
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