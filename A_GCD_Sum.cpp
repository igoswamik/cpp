#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

bool gcdSum(ll n)
{
    int dsum = 0;
    ll x = n;
    while (x > 0)
    {
        dsum += (x % 10);
        x /= 10;
    }
    //cout << n << " " << dsum << " " << gcd(n, dsum) << endl;
    return gcd(n, dsum) > 1 ? true : false;
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
        while (1)
        {
            if (gcdSum(n))
            {
                break;
            }
            n++;
        }
        cout << n << endl;
    }
    return 0;
}