#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll x)
{
    ll y;
    cin >> y;
    ll z = __gcd(x, y);
    if (z > 1)
    {
        cout << 0 << endl;
        return;
    }
    ll z1 = __gcd(x + 1, y);
    ll z2 = __gcd(x, y + 1);
    if (z1 > 1 || z2 > 1)
    {
        cout << 1 << endl;
        return;
    }
    cout << 2 << endl;

    // vector<ll> v;
    // for(int i=0;i<n;i++){
    //     ll x;
    //     cin>>x;
    //     v.push_back(x);
    // }
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