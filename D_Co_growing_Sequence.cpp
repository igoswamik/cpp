#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll findy(ll x1, ll x2)
{
    ll arr[31] = {0};
    for (int i = 0; i < 31; i++)
    {
        int x = (1 << i);
        if ((x1 & x) > 0)
        {
            if ((x2 & x) == 0)
            {
                arr[i] = 1;
            }
        }
    }
    ll y = 0;
    for (int i = 0; i < 31; i++)
    {
        if (arr[i] == 1)
        {
            y += (1 << i);
        }
    }
    return y;
}
void solve()
{
    ll n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> v;
    v.push_back(0);
    for (int i = 1; i < n; i++)
    {
        ll y = findy(a[i - 1] ^ v[i - 1], a[i]);
        v.push_back(y);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
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