#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1000000000 + 7;
void solve(ll n, ll k)
{
    if (k == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (n == 1 && k > 1)
    {
        cout << 2 << endl;
        return;
    }
    ll ans = 1 + n;
    int arr[n - 1];
    for (int i = 0; i < n - 1; i++)
        arr[i] = 1;
    k--;

    int flag = 1;
    while (k > 1)
    {
        if (flag)
        {
            ans = (ans + arr[0]) % mod;
            for (int i = 1; i < n - 1; i++)
            {
                arr[i] = (arr[i] + arr[i - 1]) % mod;
                ans = (ans + arr[i]) % mod;
            }
        }
        else
        {
            ans = (ans + arr[n - 2]) % mod;
            for (int i = n - 3; i >= 0; i--)
            {
                arr[i] = (arr[i] + arr[i + 1]) % mod;
                ans = (ans + arr[i]) % mod;
            }
        }
        flag = flag ^ 1;
        k--;
    }

    ans = ans % 1000000007;
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
        ll n, k;
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}