#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n, ll x, ll *arr)
{
    bool allequal = true, atleast1 = false;
    ll tdiff = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != x)
        {
            allequal = false;
        }
        if (arr[i] == x)
        {
            atleast1 = true;
        }
        if (arr[i] >= x)
        {
            tdiff -= (arr[i] - x);
        }
        else
        {
            tdiff += (x - arr[i]);
        }
    }
    //cout << tdiff << "diff" << endl;
    if (allequal)
    {
        cout << 0 << endl;
    }
    else if (tdiff == 0 || atleast1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
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
        ll n, x;
        cin >> n >> x;
        ll *arr = new ll[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(n, x, arr);
    }
    return 0;
}