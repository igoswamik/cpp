#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

void solve(ll n)
{
    ll mod = 1000000007;
    ll sum = 0;
    ll rem = n;
    ll div = 2;
    ll pre = 1;
    while (rem > 0)
    {
        ll curr = lcm(pre, div);
        ll newrem = n / curr;
        ll notr = rem - newrem;
        sum = (sum % mod + (notr * div) % mod) % mod;
        div++;
        pre = curr;
        rem = newrem;
    }
    sum = sum % mod;
    cout << sum << endl;
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