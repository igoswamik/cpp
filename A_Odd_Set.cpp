#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    int e = 0, o = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            e++;
        else
            o++;
    }
    if (e == o)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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