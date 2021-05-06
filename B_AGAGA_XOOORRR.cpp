#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isThree(int pre, int temp, int *arr, int n, int i)
{
    int before = 0;
    for (int j = i; j < n - 1; j++)
    {
        before ^= arr[j];
        temp ^= arr[j];
        if (before == pre && temp == pre)
        {
            return true;
        }
    }
    return false;
}
void solve(int n)
{
    int *arr = new int[n];
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        temp ^= arr[i];
    }

    //two part || threepart;
    int pre = 0;
    for (int i = 0; i < n - 1; i++)
    {
        pre = pre ^ arr[i];
        temp ^= arr[i];
        // cout << "i=" << i << "  pre=" << pre << " temp=" << temp << endl;
        if (pre == temp || isThree(pre, temp, arr, n, i + 1))
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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