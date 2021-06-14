#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    int arr[n];
    int mini = -1, maxi = -1;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (mini == -1)
            mini = i;
        if (maxi == -1)
            maxi = i;
        if (arr[mini] > arr[i])
            mini = i;
        if (arr[maxi] < arr[i])
            maxi = i;
    }
    int a = max(mini, maxi);
    int b = max(n - mini + 1, n - maxi + 1);
    int ans = min(a, b);
    int c = min(mini, maxi) + min(n - mini + 1, n - maxi + 1);
    ans = min(ans, c);
    cout << ans << endl;
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