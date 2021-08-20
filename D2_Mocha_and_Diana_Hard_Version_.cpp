#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Each time we follow a path, find function
// compresses it further until the path length
// is greater than or equal to 1.
int find(ll i, ll *Arr)
{
    // while we reach a node whose parent is
    // equal to itself
    while (Arr[i] != i)
    {
        Arr[i] = Arr[Arr[i]]; // Skip one level
        i = Arr[i];           // Move to the new level
    }
    return i;
}

// A function that does union of two nodes x and y
// where xr is root node  of x and yr is root node of y
void _union(ll xr, ll yr, ll *size, ll *Arr)
{
    if (size[xr] < size[yr]) // Make yr parent of xr
    {
        Arr[xr] = Arr[yr];
        size[yr] += size[xr];
    }
    else // Make xr parent of yr
    {
        Arr[yr] = Arr[xr];
        size[xr] += size[yr];
    }
}

ll findP(ll *parent, ll v)
{
    while (parent[v] != v)
    {
        v = parent[v];
    }

    return v;
}
void addEgdes(ll *parent1, ll *size1, ll *parent2, ll *size2, ll n, vector<pair<ll, ll>> &vec, ll u)
{

    for (int i = 1; i <= n; i++)
    {
        if (i == u)
            continue;

        ll v = i;
        ll pu = find(u, parent1);
        ll pv = find(v, parent1);
        ll pv2 = find(v, parent2);
        ll pu2 = find(u, parent2);
        if (pv != pu && pu2 != pv2)
        {
            vec.push_back(make_pair(u, v));
            _union(pu, pv, size1, parent1);
            _union(pu2, pv2, size2, parent2);
        }
    }
}
void solve(ll n)
{
    ll m1, m2;
    cin >> m1 >> m2;

    ll *parent1 = new ll[n + 1];
    ll *parent2 = new ll[n + 1];
    ll *size1 = new ll[n + 1];
    ll *size2 = new ll[n + 1];
    for (int i = 0; i <= n; i++)
    {
        parent1[i] = i;
        parent2[i] = i;
        size1[i] = 1;
        size2[i] = 1;
    }

    for (int i = 0; i < m1; i++)
    {
        int u, v;
        cin >> u >> v;
        ll pu = find(u, parent1);
        ll pv = find(v, parent1);
        parent1[pu] = pv;
        _union(pu, pv, size1, parent1);
    }
    for (int i = 0; i < m2; i++)
    {

        int u, v;
        cin >> u >> v;
        ll pu = find(u, parent2);
        ll pv = find(v, parent2);
        parent2[pu] = pv;
        _union(pu, pv, size2, parent2);
    }

    vector<pair<ll, ll>> vec;
    for (int i = 1; i <= n; i++)
    {
        if (size1[i] == 1)
        {
            addEgdes(parent1, size1, parent2, size2, n, vec, i);
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
    // initialize(n)
    solve(n);

    return 0;
}