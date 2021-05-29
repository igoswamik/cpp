#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n)
{
    int arr[2 * n];
    for (int i = 0; i < 2 * n; i++)
        cin >> arr[i];
    vector<int> v;
    int i = 0, j = 2 * n - 1;
    while (i < j)
    {
        v.push_back(arr[i]);
        v.push_back(arr[j]);
        i++;
        j--;
    }
    if (i == j)
        v.push_back(arr[i]);

    for (int i = 0; i < 2 * n; i++)
        cout << v[i] << " ";

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
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}