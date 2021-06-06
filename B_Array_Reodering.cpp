#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    vector<ll> v1, v2;
    for (int i = 0; i < n; i++)
    {

        ll x;
        cin >> x;
        if (x % 2 == 0)
        {
            v1.push_back(x);
        }
        else
        {
            v2.push_back(x);
        }
    }
    for (int i = 0; i < v2.size(); i++)
    {
        v1.push_back(v2[i]);
    }
    ll count = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] % 2 == 0)
        {
            count += n - i - 1;
        }
        else
        {
            for (int j = i + 1; j < v1.size(); j++)
            {
                if (__gcd(v1[i], v1[j]) > 1)
                    count++;
            }
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
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}