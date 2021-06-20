#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool dfs(vector<string> &v, int x, int y, char col, vector<vector<bool>> &visited)
{
    if (x < 0 || y < 0 || x >= v.size() || y >= v[0].size() || visited[x][y])
        return true;
    visited[x][y] = true;
    if (v[x][y] == '.')
        v[x][y] = col;
    else if (v[x][y] != col)
        return false;

    if (col == 'R')
        col = 'W';
    else
        col = 'R';

    return dfs(v, x + 1, y, col, visited) && dfs(v, x - 1, y, col, visited) && dfs(v, x, y + 1, col, visited) && dfs(v, x, y - 1, col, visited);
}
void solve(ll n, ll m)
{
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && v[i][j] != '.')
            {
                bool ans = dfs(v, i, j, v[i][j], visited);
                if (ans == false)
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
    if (v[0][0] == '.')
    {
        v[0][0] = 'R';
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!visited[i][j] && v[i][j] != '.')
                {
                    bool ans = dfs(v, i, j, v[i][j], visited);
                    if (ans == false)
                    {
                        cout << "NO" << endl;
                        return;
                    }
                }
            }
        }
    }

    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
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
        ll n, m;
        cin >> n >> m;
        solve(n, m);
    }
    return 0;
}