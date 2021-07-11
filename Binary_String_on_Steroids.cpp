#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    string s;
    cin >> s;
    int one = 0;
    for (int i = 0; i < n; i++)
        one += (s[i] == '1') ? 1 : 0;
    int res = n;
    for (int d = 1; d <= n; d++)
    {
        if (n % d == 0)
        {
            for (int i = 0; i < d; i++)
            {
                int matched = 0, unmatched = 0;
                for (int j = i; j < n; j += d)
                {
                    if (s[j] == '1')
                        matched++;
                    else
                        unmatched++;
                }
                int flip = unmatched + one - matched;
                res = min(res, flip);
            }
        }
    }
    cout << res << endl;
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