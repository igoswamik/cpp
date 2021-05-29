#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void find(ll *arr, ll i, ll j)
{
    if (i == 0)
    {
        arr[i] = arr[j] + 1;
    }
    ll x = arr[i - 1];
    ll y = arr[j];
    ll z = arr[j] + 1;
    while (__gcd(x, z) != 1 || __gcd(y, z) != 1)
    {
        z++;
    }
    arr[i] = z;
}
void solve(ll n)
{
    ll *arr = new ll[n + 1];
    vector<vector<int>> v;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    ll i = 1, j = 2;
    while (j <= n)
    {
        ll g = __gcd(arr[i], arr[j]);
        if (g != 1)
        {
            if (arr[i] <= arr[j])
            {
                arr[j] = arr[i] + 1;
            }
            else
            {
                find(arr, i, j);
            }
            vector<int> res;
            res.push_back(i);
            res.push_back(j);
            res.push_back(arr[i]);
            res.push_back(arr[j]);
            v.push_back(res);
        }
        i++;
        j++;
    }
    ll k = v.size();
    cout << k << endl;
    for (int i = 0; i < k; i++)
    {
        cout << v[i][0] << " " << v[i][1] << " " << v[i][2] << " " << v[i][3] << endl;
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