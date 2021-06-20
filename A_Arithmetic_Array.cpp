#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    if (sum == n)
    {
        cout << 0 << endl;
    }
    else if (sum > n)
    {
        cout << sum - n << endl;
    }
    else
    {
        cout << 1 << endl;
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