#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    vector<ll> v1, v2;
    unordered_map<ll, vector<ll>> mp;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v1.push_back(x);
        v2.push_back(x);
    }
    sort(v2.begin(), v2.end());
    for (int i = 0; i < n; i++)
    {
        if (v2[i] != v1[i])
        {
            mp[v2[i]].push_back(i);
        }
    }

    for (int i = 0; i < n; i++)
    {
        ll x = v1[i];
        if (v1[i] == v2[i])
            continue;

        int n1 = mp[x].size();
        bool flag = false;
        for (int j = n1 - 1; j >= 0; j--)
        {
            int cc = mp[x][j];
            if (abs(cc - i) % 2 == 0)
            {
                mp[x].erase(mp[x].begin() + j);
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}