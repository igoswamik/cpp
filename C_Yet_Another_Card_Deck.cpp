#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(vector<pair<int, int>> &v, int x)
{
    int res = 0, ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].first == x)
        {
            res = i;
            ans = v[i].second;
            break;
        }
        else
        {
            v[i].second += 1;
        }
    }
    v.erase(v.begin() + res);
    v.insert(v.begin(), make_pair(x, 1));
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> v;
    unordered_map<int, int> m;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (m.count(x) == 0)
        {
            v.push_back(make_pair(x, i));
            m[x]++;
        }
    }

    for (int i = 1; i <= q; i++)
    {
        int x;
        cin >> x;
        int index = solve(v, x);
        cout << index << " ";
    }
    cout << endl;
    return 0;
}