#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n, ll *b, ll sum)
{
    unordered_map<ll, ll> m;
    for (ll i = 0; i < n + 2; i++)
    {
        m[b[i]]++;
    }
    ll x = -1;
    ll ss = -1;

    for (ll i = 0; i < n + 2; i++)
    {
        ll newsum = sum - b[i];
        if (newsum % 2 == 0)
        {
            ll y = newsum / 2;
            if (m.count(y) > 0)
            {
                if (b[i] == y && m[y] <= 1)
                    continue;
                x = b[i];
                ss = y;
                break;
            }
        }
    }

    if (x != -1 && ss != -1)
    {
        for (ll i = 0; i < n + 2; i++)
        {
            if (b[i] == x)
            {
                x = -1;
            }
            else if (b[i] == ss)
            {
                ss = -1;
            }
            else
            {
                cout << b[i] << " ";
            }
        }
    }
    else
    {
        cout << -1;
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
        ll n;
        cin >> n;
        ll *b = new ll[n + 2];
        ll sum = 0;
        for (ll i = 0; i < n + 2; i++)
        {
            cin >> b[i];
            sum += b[i];
        }

        solve(n, b, sum);
    }
    return 0;
}