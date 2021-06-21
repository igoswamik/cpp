#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    ll q;
    cin >> q;
    string s;
    cin >> s;

    ll pref[n + 2];
    pref[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = s[i - 1] - 'a' + 1;
        pref[i] = x + pref[i - 1];
    }
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << endl;
    }
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