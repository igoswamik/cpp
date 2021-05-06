#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll x)
{
    int count = 0;
    int i = 1;
    while (x)
    {
        ll y = (1 << i) - 1;
        ll n = (y * (y + 1)) / 2;
        if (x >= n)
        {
            x -= n;
            count++;
        }
        else
        {
            break;
        }
        i++;
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        solve(x);
    }
    return 0;
}