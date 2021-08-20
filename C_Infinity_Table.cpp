#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll k)
{
    ll i = 1;
    ll tot = i;
    for (ll j = 1; j <= 1000000; j++)
    {
        if (j * j >= k)
        {
            i = j;
            break;
        }
    }
    // while (k <= tot && i <= 1000000)
    // {
    //     cout<<i<<" tot="<<k
    //     i++;
    //     tot = i * i;
    // }

    ll num = (i - 1) * (i - 1);

    // cout << "k=" << k << "   i=" << i << "  num=" << num << endl;

    if (k <= num + i)
    {
        ll x = k - num;
        ll y = i;
        cout << x << " " << y << endl;
    }
    else
    {
        ll x = i;
        ll y = i - (k - (num + i));
        cout << x << " " << y << endl;
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
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}