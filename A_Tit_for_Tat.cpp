#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n, int k)
{
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int i = 0, j = n - 1;
    while (i < n - 1)
    {
        int x = min(arr[i], k);
        arr[i] -= x;
        arr[j] += x;
        k -= x;
        if (k <= 0)
        {
            break;
        }
        i++;
    }
    for (int i = 0; i < n; i++)
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
        int n, k;
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}