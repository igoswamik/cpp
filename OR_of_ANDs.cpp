#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void replaceY(int *arr, int pre, int y)
{
    for (int k = 0; k < 32; k++)
    {
        if (pre & (1 << k))
        {
            arr[k]--;
        }
        if (y & (1 << k))
        {
            arr[k]++;
        }
    }
}
int decimalC(int *arr)
{
    int ans = 0;
    for (int k = 0; k < 32; k++)
    {
        if (arr[k] > 0)
        {
            ans += (1 << k);
        }
    }
    return ans;
}
void solve(ll n)
{
    ll q;
    cin >> q;
    int A[n];
    int arr[32] = {0};

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        for (int k = 0; k < 32; k++)
        {
            if (x & (1 << k))
            {
                arr[k]++;
            }
        }
        A[i] = x;
    }

    cout << decimalC(arr) << endl;
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        replaceY(arr, A[x - 1], y);
        A[x - 1] = y;
        cout << decimalC(arr) << endl;
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