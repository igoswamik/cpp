#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll d = arr[n - 1] - arr[0];
    ll mx = n - 1, mi = 0;
    while (mi < mx)
    {
        if (arr[mx - 1] - arr[mi] <= arr[mx] - arr[mi + 1])
        {
            d += arr[mx - 1] - arr[mi];
            mx--;
        }
        else
        {
            d += arr[mx] - arr[mi + 1];
            mi++;
        }
    }

    cout << d << endl;
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