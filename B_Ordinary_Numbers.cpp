#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n)
{
    int count = 0;
    for (int i = 1; i <= 9; i++)
    {

        ll x = i;
        while (x <= n)
        {
            cout << x << "   ";
            count++;
            x = x * 10 + i;
        }
    }

    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}