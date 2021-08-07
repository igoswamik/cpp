#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    int *arr = new int[n];
    unordered_map<int, vector<int>> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]].push_back(i);
    }
    vector<int> v(n, 0);
    int val = 1;
    for (auto it : m)
    {
        unordered_map<int, int> ourm;
        for (int i = 0; i < it.second.size(); i++)
        {
            if (ourm.count(val) == 0)
            {
                ourm[val]++;
                v[it.second[i]] = val;
                val++;
                if (val > k)
                {
                    val = 1;
                }
            }
            else
            {
                break;
            }
        }
    }
    unordered_map<int, int> m2;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            m2[v[i]]++;
        }
    }
    int minc = -1;
    for (auto it : m2)
    {
        if (minc == -1 || minc > it.second)
        {
            minc = it.second;
        }
    }
    m2.clear();
    for (int i = 0; i < n; i++)
    {
        m2[v[i]]++;
        if (m2[v[i]] > minc)
        {
            v[i] = 0;
            m2[v[i]]--;
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
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
        // string str; //for reading empty line
        // getline(cin, str);

        solve();
    }
    return 0;
}