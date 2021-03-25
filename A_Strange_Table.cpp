#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, x, i, j;
        cin >> n >> m >> x;
        i = (x % n);
        if (i == 0)
            i = n;
        j = ((x - i) / n) + 1;
        ll y = m * (i - 1) + j;
        cout << y << endl;
    }
    return 0;
}