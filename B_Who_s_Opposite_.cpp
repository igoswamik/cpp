#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll a)
{
    ll b, c;
    cin >> b >> c;
    // vector<ll> v;
    // for(int i=0;i<n;i++){
    //     ll x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    ll x = abs(b - a);
    ll tot = 2 * x;
    ll d1 = c + x;
    ll d2 = c - x;
    if (a <= tot && b <= tot && c <= tot)
    {
        if (d1 <= tot)
            cout << d1 << endl;
        else if (d2 <= tot)
            cout << d2 << endl;
        else
            cout << -1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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