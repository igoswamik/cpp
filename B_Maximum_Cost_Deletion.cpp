#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    ll a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    ll ans = a * n;
    if (b >= 0)
    {
        ans += n * b;
        cout << ans << endl;
        return;
    }

    int seg = 0;
    int i = 0, zero = 0, one = 0;
    while (i < n)
    {
        if (s[i] == '1')
        {
            one++;
            while (i < n && s[i] == '1')
            {
                i++;
            }
        }
        else
        {
            zero++;
            while (i < n && s[i] == '0')
            {
                i++;
            }
        }
    }
    int tot = min(zero, one) + 1;
    ans += (tot * b);
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