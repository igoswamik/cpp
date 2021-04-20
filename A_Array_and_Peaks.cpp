#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n, int k)
{
    if (k * 2 + 1 > n)
    {
        cout << -1 << endl;
        return;
    }
    vector<int> v(n, -1);
    int i = n - 2;
    int val = n;
    while (i > 0 && k > 0)
    {
        v[i] = val;
        i -= 2;
        k--;
        val--;
    }
    if (k > 0)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == -1)
        {
            v[i] = val;
            val--;
        }
    }
    for (int i = 0; i < n; i++)
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
        int n, k;
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}