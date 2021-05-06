#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll x, ll *arr)
{
    sort(arr, arr + x);
    int mid = x / 2;
    if (x % 2 == 0)
        mid -= 1;
    vector<ll> v;
    int i = 0, j = mid;
    while (i < mid && j < x)
    {
        if (arr[i] == arr[j])
        {
            v.push_back(arr[j]);
            j++;
        }
        else
        {
            v.push_back(arr[j]);
            v.push_back(arr[i]);
            i++;
            j++;
        }
    }
    while (i < mid)
    {
        v.push_back(arr[i]);
        i++;
    }
    while (j < x)
    {
        v.push_back(arr[j]);
        j++;
    }
    int co = 0;
    for (int i = 1; i < v.size() - 1; i++)
    {
        if (v[i] < v[i + 1] && v[i] < v[i - 1])
            co++;
    }

    cout << co << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin >> t;
    // while (t--)
    // {
    ll x;
    cin >> x;
    ll *arr = new ll[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    solve(x, arr);
    // }
    return 0;
}