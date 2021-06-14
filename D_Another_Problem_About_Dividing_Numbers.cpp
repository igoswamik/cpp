#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void primeFactors(ll n, vector<ll> &v)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        v.push_back(2);
        n = n / 2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            v.push_back(i);
            n = n / i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        v.push_back(n);
}
void solve(ll a, ll b, ll k)
{
    if (k == 1)
    {
        ll mi = min(a, b);
        ll ma = max(a, b);
        if (mi != ma && ma % mi == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        return;
    }
    if (a == 1 && b == 1)
    {
        cout << "NO" << endl;
        return;
    }
    if (k == 2 && a > 1 && b > 1)
    {
        cout << "YES" << endl;
        return;
    }

    vector<ll> va, vb;
    primeFactors(a, va);
    primeFactors(b, vb);
    va.push_back(1);
    vb.push_back(1);
    //unordered_map<ll, ll> m;
    // bool flag = false;
    // for (int i = 0; i < va.size(); i++)
    // {
    //     m[va[i]]++;
    //     //cout << va[i] << " ";
    // }

    // for (int i = 0; i < vb.size(); i++)
    // {
    //     if (m.count(vb[i]) > 0)
    //     {
    //         flag = true;
    //         break;
    //     }
    //     }
    ll tot = va.size() + vb.size() - 2;
    //cout << "tot=" << tot << endl;

    if (tot >= k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
        ll a, b, k;
        cin >> a >> b >> k;
        solve(a, b, k);
    }
    return 0;
}