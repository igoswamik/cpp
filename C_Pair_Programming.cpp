#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll k, n, m;
    cin >> k >> n >> m;
    int a[n];
    int b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int i = 0, j = 0;
    int arr[n + m];
    int r = 0;
    while (i < n && j < m)
    {
        if (a[i] <= k)
        {
            arr[r] = a[i];
            r++;
            if (a[i] == 0)
                k++;
            i++;
        }
        else if (b[j] <= k)
        {
            arr[r] = b[j];
            if (b[j] == 0)
                k++;
            j++;
            r++;
        }
        else
        {
            cout << -1 << endl;
            return;
        }
    }
    while (i < n)
    {
        if (a[i] <= k)
        {
            arr[r] = a[i];
            r++;
            if (a[i] == 0)
                k++;
            i++;
        }
        else
        {
            cout << -1 << endl;
            return;
        }
    }
    while (j < m)
    {
        if (b[j] <= k)
        {
            arr[r] = b[j];
            if (b[j] == 0)
                k++;
            j++;
            r++;
        }
        else
        {
            cout << -1 << endl;
            return;
        }
    }
    for (int i = 0; i < n + m; i++)
    {
        cout << arr[i] << " ";
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
        solve();
    }
    return 0;
}