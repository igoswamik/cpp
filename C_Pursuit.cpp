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
        v1.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v2.push_back(x);
    }
    sort(v1.begin(), v1.end(), greater<ll>());
    sort(v2.begin(), v2.end(), greater<ll>());
    for (int i = 1; i < n; i++)
    {
        v1[i] += v1[i - 1];
        v2[i] += v2[i - 1];
    }
    ll k = n - n / 4;
    ll ans = n;
    ll low = 0, high = n;
    if (v1[k - 1] >= v2[k - 1])
    {
        cout << 0 << endl;
        return;
    }

    while (low <= high)
    {
        ll mid = (low + high) / 2;
        ll tot = (n + mid);
        ll k = tot - tot / 4;
        ll sum1 = min(mid, k) * 100;
        ll left1 = k - mid;
        sum1 += v1[left1 - 1];
        ll x = min(n, k);
        ll sum2 = v2[x - 1];
        if (sum1 >= sum2)
        {
            ans = min(ans, mid);
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        // string str; //for reading empty line
        // getline(cin, str);
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}