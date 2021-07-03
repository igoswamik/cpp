#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    vector<int> v;
    v.push_back(-1);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        v.push_back(x);
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = (2 * i - 1) / v[i];
        int y = x * v[i];
        int j = y - i;
        while (j >= 1 && y > i)
        {
            if (j != i && v[j] * v[i] == i + j)
            {
                count++;
            }
            y -= v[i];
            j = y - i;
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
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}