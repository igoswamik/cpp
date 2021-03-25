#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void helper(vector<int> &v1, int num, vector<ll> &maxv, int l)
{
    auto lower = lower_bound(v1.begin(), v1.end(), num);
    int idx = lower - v1.begin();
    if (idx >= v1.size())
    {
        idx = v1.size() - 1;
    }
    else
    {
        idx -= 1;
    }

    for (int i = idx; i >= 0 && i > idx - l; i--)
    {
        maxv.push_back(v1[i]);
    }
    v1.erase(v1.begin() + idx - l + 1, v1.begin() + idx + 1);
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
        ll *arr = new ll[n];
        vector<int> v1, v2;
        unordered_map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (mp.count(i) == 0)
            {
                v1.push_back(i);
                v2.push_back(i);
            }
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        vector<ll> minv, maxv;
        int v2idx = 0;
        int i = 1, pre = arr[0];
        minv.push_back(pre);
        maxv.push_back(pre);
        while (i < n)
        {
            if (arr[i] == pre)
            {
                int l = 0;
                while (i < n && arr[i] == pre)
                {
                    i++;
                    l++;
                }
                if (i == n)
                {
                    sort(v1.begin(), v1.end(), greater<int>());
                    for (int j = 0; j < v1.size(); j++)
                    {
                        maxv.push_back(v1[j]);
                    }
                    for (int j = v2idx; j < v2.size(); j++)
                    {
                        minv.push_back(v2[j]);
                    }
                }
                else
                {
                    int num = arr[i];

                    helper(v1, pre, maxv, l);

                    for (int j = v2idx; j < v2.size() && l > 0; j++)
                    {
                        l--;
                        v2idx++;
                        minv.push_back(v2[j]);
                    }
                }
            }
            else
            {
                pre = arr[i];
                minv.push_back(pre);
                maxv.push_back(pre);
                i++;
            }
        }

        for (int i = 0; i < minv.size(); i++)
        {
            cout << minv[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < maxv.size(); i++)
        {
            cout << maxv[i] << " ";
        }
        cout << endl;
    }
    return 0;
}