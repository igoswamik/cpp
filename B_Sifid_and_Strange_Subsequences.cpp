#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n)
{
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int count = 0;
    int zero = 0;
    int leatDiff = INT_MAX;
    int i = 0;
    for (; i < n; i++)
    {
        if (i < n - 1 && arr[i + 1] <= 0)
        {
            leatDiff = min(leatDiff, abs(arr[i] - arr[i + 1]));
        }
        if (arr[i] <= 0)
        {
            count++;
        }
        else
        {
            break;
        }

        if (arr[i] == 0)
            zero++;
    }
    if (count < n && leatDiff >= arr[i])
        count++;

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
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}