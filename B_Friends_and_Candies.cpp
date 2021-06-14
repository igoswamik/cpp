#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    int arr[n];

    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum % n != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        long long x = sum / n;
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] > x)
                count++;
        }
        cout << count << endl;
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