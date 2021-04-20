#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, W;
        cin >> n >> W;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<int>());
        vector<ll> v;
        v.push_back(W);
        for (int i = 0; i < n; i++)
        {
            int x = arr[i];
            auto lower = lower_bound(v.begin(), v.end(), x);
            int idx = lower - v.begin();
            if (idx < v.size())
            {
                v[idx] -= x;
            }
            else
            {
                v.push_back(W - x);
            }
        }
        cout << v.size() << endl;
    }
    return 0;
}