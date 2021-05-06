#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll x, ll *arr)
{
    if (x % 2 == 0)
    {
        cout << (x / 2) - 1 << endl;
    }
    else
    {
        cout << (x / 2) << endl;
    }

    sort(arr, arr + x);
    int i = 0, j = x - 1;
    while (i <= j)
    {
        if (i == j)
        {
            cout << arr[i];
        }
        else
        {
            cout << arr[j] << " " << arr[i] << " ";
        }
        i++;
        j--;
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