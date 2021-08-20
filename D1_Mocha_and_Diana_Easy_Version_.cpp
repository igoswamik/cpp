#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll findP(ll *parent, ll v)
{
    while (parent[v] != v)
    {
        v = parent[v];
    }

    return v;
}

void addEgdes(ll *parent1, ll *parent2, ll n, vector<pair<ll, ll>> &vec, ll u)
{
    for (int i = 1; i <= n; i++)
    {
        if (i == u)
            continue;

        ll v = i;
        ll pu = findP(parent1, u);
        ll pv = findP(parent1, v);

        ll pu2 = findP(parent2, u);
        ll pv2 = findP(parent2, v);

        if (pv != pu && pu2 != pv2)
        {
            vec.push_back(make_pair(u, v));
            parent1[pv] = pu;
            parent2[pv2] = pu2;
        }
    }
}
void solve(ll n)
{
    ll m1, m2;
    cin >> m1 >> m2;
    ll *parent1 = new ll[n + 1];
    ll *parent2 = new ll[n + 1];
    for (int i = 0; i <= n; i++)
    {
        parent1[i] = i;
        parent2[i] = i;
    }

    for (int i = 0; i < m1; i++)
    {
        int u, v;
        cin >> u >> v;
        ll pu = findP(parent1, u);
        ll pv = findP(parent1, v);
        parent1[pu] = pv;
    }
    for (int i = 0; i < m2; i++)
    {
        int u, v;
        cin >> u >> v;
        ll pu = findP(parent2, u);
        ll pv = findP(parent2, v);
        parent2[pu] = pv;
    }

    vector<pair<ll, ll>> vec;
    for (int i = 1; i <= n; i++)
    {
        if (parent1[i] == i)
        {
            addEgdes(parent1, parent2, n, vec, i);
        }
    }

    cout << vec.size() << endl;
    for (auto p : vec)
    {
        cout << p.first << " " << p.second << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    solve(n);

    return 0;
}