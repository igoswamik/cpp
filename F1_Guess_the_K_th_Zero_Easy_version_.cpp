#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int help(ll l, ll r, ll n)
{
    int ans = -1;
    if (l >= 0 && r <= n)
    {
        cout << '?' << " " << l << " " << r << endl;
        cout.flush();
        cin >> ans;
    }
    return ans;
}
void solve(ll n, ll k)
{
    int s = 1, e = n;
    while (s < e)
    {
        int m = (s + e) / 2;
        int sum = help(s, m, n);
        int r = m - s + 1 - k;
        if (sum <= r)
        {
            e = m;
        }
        else
        {
            k = k - (r + k - sum);
            s = m + 1;
        }
    }
    cout << '!' << " " << s << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, t, k;
    cin >> n >> t >> k;
    solve(n, k);

    return 0;
}