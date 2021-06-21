#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    ll k, x;
    cin >> k >> x;
    vector<ll> v, v1;
    for (int i = 1; i <= n; i++)
    {
        ll y;
        cin >> y;
        v.push_back(y);
    }
    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++)
    {
        //cout << v[i] << " ";
        ll a = v[i - 1];
        ll b = v[i];
        if (b - a > x)
        {
            ll B = ((b - a) / x);
            //B -= 2;

            if ((a + B * x) >= b)
                B--;
            if (B > 0)
            {
                v1.push_back(B);
            }
        }
    }
    // cout << endl;
    sort(v1.begin(), v1.end());
    ll count = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        //cout << v1[i] << " ";
        if (v1[i] <= k)
        {
            count++;
            k -= v1[i];
        }
    }
    //cout << endl;
    ll ans = v1.size() - count;

    ans += 1;
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    solve(n);

    return 0;
}