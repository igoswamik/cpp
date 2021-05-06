#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n, int m)
{
    vector<vector<ll>> v;
    vector<ll> A;
    // priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        vector<ll> arr;
        for (int j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            arr.push_back(x);
            A.push_back(x);
        }
        //sort(arr.begin(), arr.end());
        v.push_back(arr);
    }
    sort(A.begin(), A.end());
    unordered_map<ll, ll> mp;
    for (int i = 0; i < m; i++)
    {
        mp[A[i]]++;
    }

    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mp.count(v[i][j]) > 0)
            {
                mp[v[i][j]]--;
                if (mp[v[i][j]] == 0)
                {
                    mp.erase(v[i][j]);
                }
                swap(v[i][j], v[i][idx]);
                idx++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
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
        int n, m;
        cin >> n >> m;
        solve(n, m);
    }
    return 0;
}