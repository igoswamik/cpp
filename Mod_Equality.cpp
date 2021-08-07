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
    ll ans = 0;
    ll ele = v[0];
    for (int i = 1; i < n; i++)
    {
        if (v[i] == ele)
            continue;

        ll x = v[i] - ele;
        if (v[i] % x != ele)
        {
            cout << n << endl;
            return;
        }
        else
        {
            ans++;
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