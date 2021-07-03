#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }
    if (n % 2 != 0)
    {
        v[2] = 1;
        v[0] = 2;
        v[1] = 3;
        for (int i = 3; i < n; i += 2)
        {
            swap(v[i], v[i + 1]);
        }
    }
    else
    {
        for (int i = 0; i < n; i += 2)
        {
            swap(v[i], v[i + 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
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