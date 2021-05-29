#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(int n)
{
    unordered_map<int, vector<int>> m;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        m[x].push_back(i);
    }
    long long ans = 0;
    for (auto x : m)
    {
        long long pf = 0;
        for (int y : x.second)
        {
            ans += pf * (n - y + 1);
            pf += y;
        }
    }
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
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}