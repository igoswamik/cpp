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
    int diff = v[1] - v[0];
    int x = 0, y = 1;
    for (int i = 2; i < n; i++)
    {
        if (v[i] - v[i - 1] < diff)
        {
            diff = v[i] - v[i - 1];
            x = i - 1;
            y = i;
        }
    }

    cout << v[x] << " ";

    for (int i = y + 1; i < n; i++)
    {
        cout << v[i] << " ";
    }
    for (int i = 0; i < x; i++)
    {
        cout << v[i] << " ";
    }
    cout << v[y] << " ";
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
        solve(n);
    }
    return 0;
}