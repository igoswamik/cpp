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
        int a, b, c, d, K;
        cin >> a >> b >> c >> d >> K;
        int x = abs(c - a);
        int y = abs(d - b);
        int z = x + y;
        if (K >= z && (K - z) % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}