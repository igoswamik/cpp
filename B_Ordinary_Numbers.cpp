#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    int count = 0;
    for (int i = 1; i <= 9; i++)
    {

        ll x = i;
        while (x <= n)
        {

            count++;
            x = x * 10 + i;
        }
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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        int x = min(a, b);
        int y = max(a, b);
        int aa = min(c, d);
        int bb = max(c, d);
        if (y < aa || bb < x)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}