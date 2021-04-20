#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n, int k)
{
    ll mod = 1000000007;
    ll ans = 1;
    for (int i = 0; i < k; i++)
    {
        ans = (ans * n) % mod;
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
        int n, k;
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}